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



int howMany(int a) {
  int ans = 0;
  while (a % 2 == 0) {
    a /= 2;
    ans += 1;
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int n, tmp, les;
  vector<int> arr;
  int ans = 500000000;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    les = howMany(tmp);
    if (les < ans) {
      ans = les;
    }
  }
  cout << ans;

  

}
