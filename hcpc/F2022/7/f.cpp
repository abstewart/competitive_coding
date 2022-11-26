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

  int n, d, w, a;
  while (true) {
    cin >> n >> d;
    if (n == 0 && d == 0) {
      break;
    }
    w = n / d;
    a = n % d;
    cout << w << " " << a << " / " << d << endl;
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
