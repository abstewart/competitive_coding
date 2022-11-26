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
    
  int n, h, w;

  cin >> n >> h >> w;
  int fi, si, nn;
  bool bh, rh;
  
  if (h > n/2) {
    fi = h;
  } else {
    fi = n - h;
  }

  if (w > n/2) {
    si = w;
  } else {
    si = n - w;
  }

  cout << (fi * si * 4);
}
