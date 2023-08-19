#include<bits/stdc++.h>
#define ll long long
using namespace std;

queue<int> q;
map<int,vector<int>> mp;

bool visited[10001]={false};
void bfs(int rt){
    q.push(rt);
    while(!q.empty()){
        int d=q.front();
        cout<<d<<" ";
        q.pop();
        for(auto i:mp){
            for(auto j:i.second){
                if (!visited[j]) {
                    visited[j]=true;
                    q.push(j);
                }
            }
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
    bfs(root);
    return 0;
}   