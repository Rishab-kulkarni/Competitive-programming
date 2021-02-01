#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[100];
vector<bool> visited(100, false);
vector<int> color(100);

bool dfs(int p, int c){
    visited[p] = true;
    color[p] = c;
    for(auto u : adj[p]){
        if(!visited[u]){
            if(!dfs(u, c ^ 1)) return false;
        }

        else{
            if(color[u] == color[p]) return false;
        }
    }
    return true;
}


int main(){

    open();
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(dfs(1,0)) cout << "Bipartite" << endl;
    else cout << "Not bipartite" << endl;
}