#include <bits/stdc++.h>
using namespace std;

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    unordered_map<int, int> visited;
    vector<vector<int>> graph(n);
    visited.reserve(n);
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < edges.size(); i++) {
        graph[edges[i][0]].push_back(edges[i][1]);
        graph[edges[i][1]].push_back(edges[i][0]);

        // { 
        // 0    {1, 2},
        // 1    {0, 2},
        // 2    {1, 0}
        // }
    }
        queue<int> q;
        q.push(source);

    while (!q.empty()) {
        int currrentVertex = q.front();
        q.pop();

        if (currrentVertex == destination) return true;

        for (int neighbour: graph[currrentVertex]) {
            if (visited[neighbour] != 1) {
                visited[source] = 1;
                q.push(neighbour);
            }   
        }
    }
    
    return false;
}

int main() {
    vector<vector<int>> edges = { 
        {0,1},
        {1,2},
        {2,0}
    };
    bool result = validPath(3, edges, 0, 2);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
