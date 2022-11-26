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

float dist;
int n;

vector<vector<float> > hives;

float findD(int a, int b) {
  float ax, ay, bx, by, dx, dy;
  ax = hives[a][0];
  bx = hives[b][0];
  ay = hives[a][1];
  by = hives[b][1];

  dx = ax-bx;
  dy = ay-by;
  return sqrt(dx*dx + dy*dy);
}

void solve() {
  hives.clear();
  hives.resize(n);
  float x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    hives[i].push_back(x);
    hives[i].push_back(y);
    hives[i].push_back(0);
  }

  for(int j = 0; j < n; j++) {
    for(int k = j+1; k<n; k++) {
      if (findD(j, k) <= dist) {
	hives[j].pop_back();
	hives[k].pop_back();
	hives[j].push_back(1.0);
	hives[k].push_back(1.0);
      }
    }
  }
  int sour, sweet;
  sour = 0;
  sweet = 0;
  for (int l = 0; l < n; l++) {
    if (hives[l][2] == 1.0) {
      sour ++;
    }else{
      sweet++;
    }
  }
  cout << sour << " sour, " << sweet << " sweet" << endl;
}



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  while(true) {
    cin >> dist >> n;
    if (dist == 0.0 && n == 0) {break;}
    else {
      solve();
    }
  }
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
