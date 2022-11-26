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




int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  if ( m > x) {
    cout << d;
  }
  cout << t - ((x-m) * d);

}
