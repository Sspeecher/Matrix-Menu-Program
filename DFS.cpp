#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<bool> &visited, vector<vector<int>> &adj) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, visited, adj);
        }
    }
}

int main() {
    int V = 5; 

    vector<vector<int>> adj(V);

    // Add edges (undirected graph)
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    vector<bool> visited(V, false);

    cout << "DFS Traversal: ";
    DFS(0, visited, adj);

    return 0;
}