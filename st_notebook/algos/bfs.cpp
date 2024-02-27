// Breadth-first search
// O(n+m)

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 12;
vector<vector<int>> graph(MAXN);

void bfs (int start) {

    queue<int> q; 
    q.push(start); 

    vector <bool> visited(MAXN, false);
    visited[start] = true;
    while(q.size()) {
        int u = q.front();
        q.pop();
        for (int w: graph[u]) {
            if(!visited[w]){
                q.push(w);
                visited[w];
            }
        }
    }
}