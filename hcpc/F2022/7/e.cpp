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

typedef unsigned long long ll;



ll findS(ll n) {
  return (n*(n+1))/2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  int cases;
  cin >> cases;

  ll ans = 0;
  ll start, stop;
  for (int i = 0; i < cases; i++) {
    cin >> start >> stop;
    //cout << start << " " << stop << endl;
    //cout << findS(stop) << endl;
    ans += findS(stop)-findS(start) + start;
  }
  cout << ans;

  //6 - 1 = 5+1 = 6
  //15 - 6 = 9+3 = 12


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
