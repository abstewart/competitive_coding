#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <cstring>
#include <cmath>

using namespace std;

#define fi first
#define se second

typedef long long ll;

int vis[1000];


class Wheel {
public:
  int x;
  int y;
  int r;
  ll num;
  ll den;
  int dir;
  Wheel() {
    x = 0;
    y = 0;
    r = 0;
    num = 0;
    den = 0;
    dir = 0;
  }
};

bool isTouching(Wheel &a, Wheel &b) {
  int dx = (a.x-b.x);
  int dy = (a.y-b.y);
  int dr = (a.r+b.r);
  //cout << dx << dy << dr << endl;
  return (dx*dx) + (dy*dy) == (dr*dr);
}

int populateWheels(vector<Wheel> &ws) {
  int w;
  int a, b, c;
  cin >> w;
  for (int i = 0; i<w; i++) {
    cin >> a >> b >> c;
    Wheel tmp;
    tmp.x = a;
    tmp.y = b;
    tmp.r = c;
    ws.push_back(tmp);
  }
  return w;
}

void fillEdges(vector<Wheel> &ws, vector<vector<int> > &ed) {
  for(int i = 0; i < ws.size(); i++) {
    for(int j = i+1; j < ws.size(); j++) {
      //cout << "checking" << endl;
      if(isTouching(ws.at(i), ws.at(j))) {
	ed.at(i).push_back(j);
	//cout << "adding edge" << endl;
      }
    }
  }
}

int findGCD(ll a, ll b) {
  if (b == 0)
    return a;
  return findGCD(b, a % b);
}
void lowestFraction(ll &num1, ll &num2){
  ll denom;
  denom = findGCD(num1,num2);
  num1 /= denom;
  num2 /= denom;
}

void setMotion(int curr, vector<Wheel> &ws, vector<vector<int> > &edges, int prev) {
  if (vis[curr] == 1) {
    return;
  }

  if(curr == 0) {
    vis[0] = 1;
    ws.at(0).num = 1;
    ws.at(0).den = 1;
    ws.at(0).dir = 1;
    for(int i = 0; i < edges.at(curr).size(); i++) {
      setMotion(edges.at(0).at(i), ws, edges, 0);
    }
  }
  else {
    //cout << "other case" << endl;
    vis[curr] = 1;
    Wheel cw = ws.at(curr);
    Wheel pw = ws.at(prev);

    ws.at(curr).dir = -1*pw.dir;
    ws.at(curr).num = pw.num*pw.r;
    ws.at(curr).den = pw.den*cw.r;
    lowestFraction(ws.at(curr).num, ws.at(curr).den);

    for(int i = 0; i < edges[curr].size(); i++) {
      setMotion(edges[curr][i], ws, edges, curr);
    }
  }
}

void debugAns(vector<Wheel> &ws) {

  for(int i = 0; i < ws.size(); i++) {
    Wheel curr = ws.at(i);
    cout << "wheel: " << i << " num: " << curr.num << " den: " << curr.den << " dir: " << curr.dir << endl;
  }
}

void printAns(vector<Wheel> &ws) {
  for(int i = 0; i < ws.size(); i++) {
    Wheel curr = ws.at(i);
    if (curr.dir == 0) {
      cout << "not moving"<<endl;
    }else {
      if (curr.den == 1) {
	cout << curr.num << " ";
      }else {
	cout << curr.num << "/" << curr.den << " ";
      }
      if (curr.dir == 1) {
	cout << "clockwise" << endl;
      } else {
	cout << "counterclockwise" << endl;
      }
    }
  }
}



void solve() {
  int numW;
  vector<Wheel> ws;
  vector<vector<int> > edges;
  numW = populateWheels(ws);
  //cout << "0.x: " << ws.at(0).x << "0.r" << ws.at(0).r << endl;
  edges.resize(numW);
  fillEdges(ws, edges);
  //clear visited list
  for(int i = 0; i < 1000; i++) {
    vis[i] = 0;
  }
  setMotion(0, ws, edges, 0);
  printAns(ws);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  
  int cases;
  cin >> cases;
  cout << "cases: " << cases << endl;
  for(int i = 0; i<cases; i++) {
    solve();
  }

  
  //cout << "size: " << ws.size() << endl; // 
    
  // string a,b;
  // cin >> a >> b;
  // int c = 1;
  // for (int i=0;i<4;i++) {
  //   if (a[i]==b[i])
  //     continue;
  //   c*=2;
  // }
  //cout << c << "\n";
}

