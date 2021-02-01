#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)
#define endl "\n"

typedef long long ll;
typedef long double ld;

const ll MOD = 1000000007;

vector<int> adj[5];
vector<bool>visited(5, false);

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


vector<int> color(100, 0);
vector<int> time_in(100, 0), time_out(100, 0);
int dfs_timer = 0;

void dfs(int u){
    // if(visited[u]) return;
    // visited[u] = true;
    time_in[u] = dfs_timer++;
    color[u] = 1;
    cout << u << ' ';
    for(auto v : adj[u]){
        if(color[v] == 0){
            dfs(v);
        }
        color[v] = 2;
    }

    time_out[u] = dfs_timer++;
}

queue<int> q;
int dist[100];

void bfs(int x){

    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    // cout << x << ' ';
    while(!q.empty()){
        int s = q.front();
        cout << s << ' ';
        q.pop();

        for(auto u : adj[s]){
            if(visited[u]) continue;
            // cout << u << ' ';
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }

    }

}


int main(){

    fastio();
    open();

    
    
    addEdge(0, 1); 
    addEdge( 0, 4); 
    addEdge(1, 2); 
    addEdge( 1, 3); 
    addEdge( 1, 4); 
    addEdge( 2, 3); 
    addEdge( 3, 4);

    for(int i = 0 ; i < 5 ; i++){
        cout << i ;
        for(auto v : adj[i]){
            cout << "---> " << v;
        }
        cout << endl;
    }

    cout << endl;
    // cout << "dfs" << endl;

    // for(int i = 0 ; i <= 4 ; i++){
    //     dfs(i);
    //     for(int j = 0 ; j <= 4 ; j++) visited[j] = false;
    //     cout << endl;
    // }
    
    cout << "dfs\n" ;
    dfs(1);
    cout << endl;
    // for(int i = 0 ; i <= 4 ; i++) cout << dist[i] << ' ';

    for(int i = 0 ; i<=4 ; i++) cout << color[i] << ' '; 
    cout << endl;
    for(int i = 0 ; i <= 4 ; i++){
        cout << "entry time = " << time_in[i] << "   ";
        cout << "out time = " << time_out[i] << endl;
    }
}