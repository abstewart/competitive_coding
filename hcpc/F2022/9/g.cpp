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

  int days[366] = {};
  int n;
  int s, e;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> e;
    days[s-1] += 1;
    days[e] -= 1;
  }
  int curr = 0;
  int ans;
  for(int j = 0; j < 365; j++) {
    //cout << "d: " << days[j] << endl;;
    curr += days[j];
    if (curr > 0) {
      //cout << j << endl;;
      ans += 1;
    }
  }
  cout << ans << endl;;
}
