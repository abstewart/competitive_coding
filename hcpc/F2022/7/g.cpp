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

  int n;
  vector<int> temps;
  cin >> n;
  int tmp;
  for (int i = 0; i<n; i++) {
    cin >> tmp;
    temps.push_back(tmp);
  }
  int ind = 1;
  int minT = 40;
  for(int j = 0; j < n-2; j++) {
    tmp = max(temps[j], temps[j+2]);
    if( tmp < minT) {
      minT = tmp;
      ind = j+1;
    }

  }
  cout << ind << " " << minT;
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
