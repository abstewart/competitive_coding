//code posted in the discord

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
  int n, m; //h and w
  cin >> h >> w;
  // cout << "h: " << h << "\n";
  // cout << "w: " << w << "\n";
  vector<vector<char>> g(n, vector<char>(m));
  vector<vector<bool>> vis(n, vector<bool>(m));
  vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m));
  vector<vector<char>> dir(n, vector<bool>(m));
  
  //store all the possible directions you can go
  const int dr[4] = {0, -1, 0, 1}, dc[4] = {-1, 0, 1, 0}
  pair<int, int> s, t;

  for(int i=0; i<n; i++) {
    for(int j = 0; j<m; j++) {
      cin >> g[i][j];
      if(g[i][j] == 'A') s = {i, j};
      else if(g[i][j] == 'B') t = {i,j};
    }
  }

  queue<pair<int, int>> bfs;
  bfs.push(s);

  while (!bfs.empty()) {

    pair<int, int> c = bfs.front();
    bfs.pop();

    for(int i = 0; i < 4; i++) {
      
      if(nb.first < 0 || nb.first >= n) continue;
      if(nb.second < 0 || nb.second >= m) continue;

      if(g[nb.first][nb.second] == '#') continue;
      if(vis[nb.first][nb.second]) continue;

      bfs.push(nb);
    }
  }

  if(!vis[t.first][t.second]) {
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;


  vector<char> ans;
  pair<int, int> curr = t;
  while(curr != s) {
    cout << directionNames[dir[curr.first][curr.second]] << "" << curr.second << endl;
    ans.push_back(directionNames[dir[curr.first][curr.second]]);
    curr = parent[curr.first][curr.second];
  }

  cout << ans.size() << endl;
  for(int i = ans.size() -1; i >= 0; i--) {
    cout << ans.
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
