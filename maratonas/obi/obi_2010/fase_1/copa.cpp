#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 998244353;
const int MAX = 2e5+1;



void solve() { 

	queue <char> q;

	for (char i = 'A'; i <= 'P'; i++) {
		q.push(i);
	}

	for (int i = 0; i < 15; i++) {

		int a, b;
		cin >> a >> b;

		char time1 = q.front();
		q.pop();

		char time2 = q.front();
		q.pop();

		if (a > b) q.push(time1);
		else q.push(time2);

	}

	cout << q.front() << "\n";
	
}


signed main() { _ 
    
    int t = 1; // cin >> t;
    while(t--) 
        solve();
 
    return 0;
}