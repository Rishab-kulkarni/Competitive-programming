// Codechef problem
// https://www.codechef.com/problems/FIRESC

#include<bits/stdc++.h>
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;
typedef long long ll;

int n,m;
vector<int>adj[100001];
vector<bool> visited(100001);
vector<int> res;
const ll MOD = 1e9 + 7;
int cnt;

void dfs(int u){
    cnt++;
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    
    open();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;

        for(int i = 1 ; i <= n ; i++){
            adj[i].clear();
            visited[i] = false;
        }

        

        for(int i = 0 ; i < m ; i++){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        res.clear();
        
        int comps = 0;
        ll prod = 1;
        for(int i = 1 ; i <= n ; i++){
            if(!visited[i]){
                cnt = 0;
                dfs(i);
                prod = (prod*cnt)%MOD;
                comps++;
            }
        }

        
        cout << comps << ' ' << prod << endl;
        // cnt = 0;
        // comps = 0;
    }
}