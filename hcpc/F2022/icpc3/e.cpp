#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

#define fi first
#define se second

typedef long long ll;


vector<int> prob;
vector<int> solve;
//first is time solved, second is time cost to solve
pair<ll, ll> v[100005];

bool isSolvable(int nComp, int s) {
  ll spareT = 0;
  ll prevT = 0;
  for(int i=0; i<s; i++) {
    if(v[i].first == -1) {
      continue;
    }
    spareT += (v[i].first - prevT) * nComp;
    prevT = v[i].first;
    spareT -= v[i].second;
    if(spareT < 0) {
      return false;
    }
  }
  return true;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int n;

  cin >> n;
  int tmp;
  for(int i=0; i<n; i++) {
    cin >> tmp;
    v[i].second = tmp;
    //prob.push_back(tmp);
  }
  for(int i=0; i<n; i++) {
    cin >> tmp;
    v[i].first = tmp;
    //solve.push_back(tmp);
  }

  //sor the arr
  sort(v, v+n);



  //binary search
  int l = 0, r = 1e9 + 5;
  while(r - l > 1) {
    int m = (l + r) / 2;
    //cout << "l: " << l << " r: " << r << " m: " << m <<endl;
    if(isSolvable(m, n)) {
      //cout << "first case" << endl;
      r = m; // 0 = f(l) < f(m) = 1
      //l = m;
    } else {
      l = m; // 0 = f(m) < f(r) = 1
      //r = m;
      //cout << "second case" << endl;
    }
  }
  //cout << r << " l: " << l << endl;
  cout << r << endl;

  //cout << isSolvable(500000002, n) << endl;
  // //find the solution
  // for(int i=0; i<n; i++) {
  //   p = prob[i];
  //   s = solve[i];
  //   if(s == -1) {
  //     continue;
  //   }
  //   if (p < s) {
  //     continue;
  //   }
  //   if (p % s == 0) {
  //     ans = max(ans, p / s);
  //   } else {
  //     ans = max(ans, (p / s) + 1);
  //   }
  // }

  //cout << ans;
  
  
}
