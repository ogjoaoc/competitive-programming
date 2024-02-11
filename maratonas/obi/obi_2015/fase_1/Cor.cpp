#include <bits/stdc++.h>

#define pb push_back
#define pii pair <int, int>

using namespace std;

int main() {

	int n; cin >> n;
	vector <pair<int,int>> pos_zeros;
	vector <vector <char>> mi(n, vector<char> (n));
	vector <vector <int>> ans(n, vector<int> (n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mi[i][j]; 
		}
	}


	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (mi[i][j] == '0') {
				pos_zeros.pb(make_pair(i, j));
			}
		}
	}

	// dbg	for (auto p : pos_zeros) cout << p.first << " " << p.second << "\n";

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (mi[i][j] == '*') {
				int mini = 1000;
				for (int k = 0; k < pos_zeros.size(); k++) {
					int current = abs(i-pos_zeros[k].first) + abs(j-pos_zeros[k].second);
					if (current < mini) {
						mini = current;
					}
				}
				if (mini > 9) ans[i][j] = 9;
				else ans[i][j] = mini;
				// cout << ans[i][j] << "teste\n";
			}
			else {
				ans[i][j] = 0;
			}
		}
	}

	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << ans[i][j];
		}
		cout << "\n";
	}	
	


	return 0;
}