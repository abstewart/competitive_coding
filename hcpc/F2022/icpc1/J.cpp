#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

#define fi first
#define se second

typedef long long ll;
// 0 1 2
// 3 4 5
// 6 7 8

unordered_map<string, pair<int, int> > wins;

int w[8][3] = {{0,1,2},{3,4,5},{6,7,8},
			 {0,4,8}, {2,4,6}, 
			 {0,3,6}, {1,4,7}, {2,5,8}
			};

bool isValid(string s) {

  int x = 0;
  int o = 0;
  int xwin = 0;
  int owin = 0;

  //process nums
  //count x's and o's
  for (int i = 0; i < 9; i++) {
    char c = s[i];
    if (c == 'X') {
      x++;
    } else if (c == 'O') {
      o++;
    }
  }

  for (int j = 0; j < 8; j++) {
    if (s[w[j][0]] == s[w[j][1]] && s[w[j][0]] == s[w[j][2]]) {
			if (s[w[j][0]] == 'X')
				xwin++;
			else if (s[w[j][0]] == 'O')
				owin++;
		}
  }
  

  xwin = min(xwin, 1);
  owin = min(owin, 1);
  //check nums
  //x & o count either the same or x is 1 greater than o
  // cout << x << 
  if (x != o){
    if (x != (o+1)) {
		// cout << s << " too many xs\n";
      return false;
    }
  }
  if (xwin + owin > 1) {
    //if both have won
    return false;
  }

  return true;

}
// 1 for x -1 for o 0
int winstate(string& s) {
	for (int i=0;i<8;i++) {
		if (s[w[i][0]] == s[w[i][1]] && s[w[i][0]] == s[w[i][2]]) {
			if (s[w[i][0]] == 'X')
				return 1;
			else if (s[w[i][0]] == 'O')
				return -1;
		}
	}
	return 0;
}

pair<int, int> dfs(string s, int turn) {

	// check if valid
	if (!isValid(s)) {
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				cout << s[j*3+i];
			}
			cout << "\n";
		}
		cout << "-----\n";
		return {0,0};
	}
	if (wins.find(s) != wins.end()) {
		return wins[s];
	}
	int winner = winstate(s);
	if (winner) {
		if (winner == 1) {
			wins[s] = {1,0};
		} else {
			wins[s] = {0,1};
		}
		// cout << s << ": " << wins[s].fi << " " << wins[s].se << "\n";
		return wins[s];
	}


	pair<int, int> current_wins = {0,0};
	for (int i=0;i<9;i++) {
		if (s[i] == '.') {

			if (turn)
				s[i] = 'X';
			else
				s[i] = 'O';
			pair<int, int>  nx = dfs(s, turn^1);
			current_wins.fi += nx.fi;
			current_wins.se += nx.se;
			// s[i] = 'O';
			// nx = dfs(s);
			// current_wins.fi += nx.fi;
			// current_wins.se += nx.se;

			s[i]='.';
		}
	}
	wins[s] = current_wins;
// cout << s << ": " << wins[s].fi << " " << wins[s].se << "\n";

	return current_wins;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string initial = ".........";
    dfs(initial, 1);

    int t;
    cin >> t;
    while (t--) {
    	string s;
    	cin >> s;
    	if (wins.find(s) != wins.end()) {
    		cout << wins[s].fi << " " << wins[s].se << "\n";
    	} else {
    		cout << -1 << " " << -1 << "\n";
    	}
    }
}