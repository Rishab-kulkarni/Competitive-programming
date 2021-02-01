#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

vector<int> adj[1000];
vector<int> parent(1000, -1);
vector<bool> visited(1000, false);
queue <int> q;

bool bfs(int n, int p){
    visited[n] = true;
    q.push(n);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(auto v : adj[s]){
            if(!visited[v]){
                visited[v] = true;
                parent[v] = s;
                q.push(v);
            }

            else{
                if(visited[v] && parent[s]!=v){
                    return true;
                }
            }

        }
    }

    return false;
}


int main(){

    open();

    int n,m;
    cin >> n >> m;

    for(int i = 1 ; i <= m ; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);    
    }


    if(bfs(1, -1)) cout << "Cyclic" << endl;
    else cout << "Non cyclic" << endl;


}