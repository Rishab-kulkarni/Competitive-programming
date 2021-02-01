#include<bits/stdc++.h>
#define fastio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[100];
vector<bool> visited;
vector<int> dist_array(100,0);



// Works only for trees - for graphs use dijkstra's 
void dfs(int u, int dist){
    if(visited[u]) return;
    visited[u] = true;
    dist_array[u] = dist;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v, dist+1);
        }
    }
}

queue<int> q;

void bfs(int u){
    visited[u] = true;
    q.push(u);
    dist_array[u] = 0;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(auto u : adj[s]){
            if(!visited[u]){
                visited[u] = true;
                q.push(u);
                dist_array[u] = dist_array[s] + 1;
            }
        }
    }
}




int main(){

    fastio();

    int n, e;
    cin >> n >> e;
    
    visited.resize(n+1,false);

    for(int i = 0 ; i < e ; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // dfs(1, 0);
    bfs(2);
    for(int i =1 ; i<= n ; i++){
        cout << dist_array[i] << ' ';
    }


}