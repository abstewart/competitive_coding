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


void solve() {
	string s;
	cin >> s;
	int last = -1;
	bool bad = false;
	bool first = false;
	bool up2 = false;
	for (char c : s) {
		if (!first && c == '0')
			continue;

		first = true;
		if (bad) {
			int cc = c-'0';

			if (!up2 && cc > last) {
				up2 = true;
			} 
			if (!up2)
				last = min(cc,last);
			cout << last;

		} else {
			int cc = c-'0';
			cout << cc;

			if (cc >= last) {
				last = cc;
			} else {
				last = cc;
				bad = true;
			}
		}

	}
	if (!first) {
		cout << 0;
	}
	cout << "\n";
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    	solve();
}