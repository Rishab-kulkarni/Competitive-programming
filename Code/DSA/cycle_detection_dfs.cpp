
// Detecting cycle in an undirected graph


#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin) ; freopen("output.txt", "w", stdout);
using namespace std;


vector<int> adj[1000];
vector<bool> visited(1000, false);
vector<int> color(1000, 0);
vector<int> parent(1000, -1);
int cycle_start, cycle_end;
int n, m;

// bool dfs(int n, int p){
//     visited[n] = true;
//     for(auto v : adj[n]){
//         if(!visited[v]){
//             if(dfs(v, n)) return true;
//         }

//         else{
//             if(v != p) return true;  // here magic happens
//         }
//     }

//     return false;
// }


bool dfs(int v, int par){           // returns true if a cycle is present
    color[v] = 1;
    for(auto u : adj[v]){       // exploring the child nodes of node 'v'          
        
        if(u == par) continue;      // just skip since (u, par) and (par, u) in adj list
        
        if(color[u] == 0){      // unvistied child node
            parent[u] = v;
            if(dfs(u, parent[u])) return true;
        }       
        else if(color[u] == 1){     // visited child node
            cycle_end =v;
            cycle_start = u;
            return true;        // true if cycle found
        }
    
    }

    color[v] = 2;           // exit colors
    return false;
}


void find_cycle(){
    // color.assign(n , 0);
    // parent.assign(n, -1);
    cycle_start = -1;           // no cycles then -1

    for(int v = 1 ; v <= n ; v++){           // dfsing each node
        if(color[v] == 0 && dfs(v, parent[v])){                
            break;
        }
    }

    if(cycle_start == -1) cout << "No cycles" << endl;
    else{
        vector<int> cycle;
        cycle.push_back(cycle_start);
        for(int v = cycle_end ; v!= cycle_start ; v = parent[v]){
            cycle.push_back(v);
        }
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());
        cout << "Cycle is : " << endl;
        for(auto val : cycle) cout << val << ' ';
        cout << endl;
    }




}





int main(){

    open();
    
    

    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }    
    
    find_cycle();


}