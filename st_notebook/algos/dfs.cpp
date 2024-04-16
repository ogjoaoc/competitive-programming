// Depth-first search
// O(V+E)

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define iii tuple<int, int, int> 
#define mp make_pair
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(), x.end()
#define _ ios::sync_with_stdio(false); cin.tie(0);

const int MAXN = 1003;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9+7;

vector<int> grafo[MAXN];
int vis[MAXN];

void dfs(int u) {
	
	cout << u << ' ';
	
	for(auto vizinho : grafo[u]) {
		if(!vis[vizinho]) {
			vis[vizinho] = 1;
			dfs(vizinho);
		}
	}
	
}

int main() {_
	
	grafo[1].push_back(2);
	grafo[1].push_back(4);
	grafo[2].push_back(3);
	grafo[2].push_back(5);
	grafo[4].push_back(1);
	grafo[3].push_back(2);
	grafo[5].push_back(2);
	
	vis[1] = 1;
	dfs(1);
			
	return 0;	
}




