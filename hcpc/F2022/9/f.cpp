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

  int h, n;
  cin >> h >> n;
  int tmp;
  for(int i = 0; i < n; i++) {
    cin >> tmp;
    h -= tmp;
    if (h <= 0) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  

}
