#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[10001];
vector<bool> visited(10001, false);

vector<int> side(10001, -1);        // partitioning into two sets {1, 0} , -1 means node not yet visited

/* void dfs(int u){
    if(visited[u]) return;
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
} */

queue<int> q;



int main(){

    fastio();
    open();

    int n,e;
    cin >> n >> e;
    for(int i = 0 ; i < e ; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // dfs(1);
    
    bool isBipartite = true;

    // bfs version of checking bipartness 
    for(int i = 1 ; i<= n ; i++){
        if(side[i] == -1){
            q.push(i);
            side[i] = 1;
            while(!q.empty()){
                int s = q.front();
                q.pop();
                for(auto u : adj[s]){
                    if(side[u] == -1){
                        side[u] = side[s] ^ 1;            // giving the opp color to all the nodes adjacent to s (xor operation)
                        q.push(u);
                    }

                    else{
                        isBipartite &= (side[u]!= side[s]);         // if already visited checking whether the adj vertex and 
                    }

                }
            }
        }
    }

    if(isBipartite) cout << "Bipartite" << endl;
    else cout << "Not bipartite" << endl;

    cout << endl;
    for(int i = 1 ; i <= n ; i++){
        cout << side[i] << ' ';
    }
    

}