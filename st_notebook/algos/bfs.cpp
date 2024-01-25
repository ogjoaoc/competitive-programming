// Breadth-first search
// O(n+m)

#include <bits/stdc++.h>
using namespace std;

const int GRAPH_MAX_SIZE = 12;
vector<vector<int>> graph(GRAPH_MAX_SIZE);

void bfs (int start) {

    queue<int> q; 
    q.push(start); 

    vector <bool> visited(GRAPH_MAX_SIZE, false);
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