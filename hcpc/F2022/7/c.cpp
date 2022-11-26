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


int f(int k) {
  if (k == 0) {
    return 1;
  }
  return k * f(k-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, ans;
  cin >> n;
  ans = f(n);
  cout << ans;
  
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
