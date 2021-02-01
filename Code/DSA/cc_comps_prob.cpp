#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL) ; cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

using namespace std;

int n,e;
vector<int> adj[1000];
vector<bool> visited;

void dfs(int u){
    if(visited[u]) return;
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

queue <int> q;

void bfs(int u){
    visited[u] = true;
    q.push(u);
    while(!q.empty()){
        int s = q.front();        
        q.pop();
        
        for(auto e : adj[s]){
            if(!visited[e]){
                visited[e] = true;
                q.push(e);
            }
        }
    }    
}




int main(){

    fastio();
    open();

    cin >> n >> e;
    int val = e;
    
    visited.resize(n, false);

    while(val--){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            bfs(i);
            cnt++;
        }
    }

    cout << cnt  << endl;
}