#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<int,vector<int>> mp;
bool visited[1000]; // Define the visited array globally

void dfs(int n) {
    visited[n] = true;
    cout << n << " ";
    for (auto i : mp[n]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    cout << "Enter no. of edges: ";
    int n, v1, v2;
    cin >> n;
    cout << "Enter the nodes that are adjacent: ";
    for (int i = 0; i < n; i++) {
        cin >> v1 >> v2;
        mp[v1].push_back(v2);
        mp[v2].push_back(v1);
    }
    cout << "Enter root to find the dfs travel: ";
    int root;
    cin >> root;
    dfs(root);
    return 0;
}
