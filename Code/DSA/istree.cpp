#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[100001];
vector<bool> visited(100001, false);

void dfs(int u){
    if(!visited[u]){
        visited[u] = true;
        for(auto v : adj[u]){
            if(!visited[v]){
                // visited[v] = true;
                dfs(v);
            }
        }
    }
}


int main(){

    open();

    int n,m;
    cin >> n >> m;
    // visited.resize(n+1);
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    int cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }

    
    if(n-1 == m && cnt == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

}