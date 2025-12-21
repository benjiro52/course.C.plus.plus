#include <bits/stdc++.h>
using namespace std;

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    unordered_map<int, int> visited;
    visited.reserve(n);

    vector<vector<int>> graph(n);

    for (int i = 0; i < n; i++) {
        graph[edges[i][0]].push_back(edges[i][1]);
        graph[edges[i][1]].push_back(edges[i][0]);
    }

    queue<int> q;
    q.push(source);

    while (!q.empty()) {
        int current_vertex = q.front();
        q.pop();

        if (current_vertex == )
    }



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