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
const int INF = 1e9;


vector<vector<pii>> grafo(1010, vector<pii> ());

vector<int> djikstra(int S) {

    priority_queue < pii, vector<pii>, greater<pii> > fila;
    vector<bool> visto(1010, false);
    vector<int> dist(1010, INF);

    dist[S] = 0;

    fila.push({dist[S], S});

    while (!fila.empty()) {

        int u = fila.top().second;
        fila.pop();

        if (visto[u]) continue;
        visto[u] = true;

        for (auto g : grafo[u]) {

            int v = g.first;
            int p = g.second;

            if (dist[u] + p < dist[v]) {
                dist[v] = dist[u] + p;
                fila.push({dist[v], v});
            }

        }

    }

    return dist;

}

int main() 
{ _

    int N, M, S;

    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        
        int u, v, p;
        cin >> u >> v >> p;

        grafo[u].push_back({v, p});
        grafo[v].push_back({u, p});


    }

    cin >> S;

    vector<int> ans = djikstra(S);
    int mini = INF, maxi = 0;

    for (int i = 1; i <= N; i++) {
        if (i != S) {
            maxi = max(maxi, ans[i]);
            mini = min(mini, ans[i]);
        }
    }

    cout << maxi-mini << "\n";
  
    return 0;
}

