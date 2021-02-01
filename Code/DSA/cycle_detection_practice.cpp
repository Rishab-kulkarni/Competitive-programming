// Finding cycles in an undirected graph

#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

vector<int> adj[1000];
int n,m;
vector<int> parent(1000, -1), color(1000, 0);      // maintaining the entry and exit colors (visited array basically) - storing colors for more info
int cycle_start , cycle_end ;

bool dfs(int u, int par){
    color[u] = 1;
    for(auto v : adj[u]){
        if(v == par) continue;

        if(color[v] == 0){
            parent[v] = u;
            if(dfs(v, parent[v])) return true;
        }

        else if(color[v] == 1 ){
            cycle_start = v;
            cycle_end = u;
            return true;
        }

    }

    color[u] = 2;       // exit color
    return false;
}




void find_cycle(){
    cycle_start = -1;

    // parent.assign(n , -1);
    // color.assign(n , 0);

    for(int i = 1 ; i <= n ; i++){
        if(color[i] == 0 && dfs(i, parent[i])){
            break;
        }
    }


    if(cycle_start == -1) cout << "no cycles" << endl;
    else{
        cout << "Cycle found : " << endl;
        
        vector<int> cycle;  // maintaining cycle array
        cycle.push_back(cycle_start);
        for(int i = cycle_end ; i!= cycle_start ; i = parent[i]){
            cycle.push_back(i);
        }
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        for(auto v : cycle){
            cout << v << ' ';
        }
        cout << endl;

    }



}


int main(){

    open();

    cin >> n >> m ; // no of nodes and edges resp

    for(int i = 0 ; i < m ; ++i){
        int u,v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


   
    find_cycle();
}

