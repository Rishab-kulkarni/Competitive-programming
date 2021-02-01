#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)
#define endl "\n"

typedef long long ll;
typedef long double ld;

const ll MOD = 1000000007;

vector<int> adj[7];
vector<bool>visited(7, false);

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int cnt2 = 0;

void dfs(int u){
    if(visited[u]) return;
    visited[u] = true;
    cnt2++;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}


int main(){

    fastio();
    open();

    addEdge(1,2); 
    addEdge(1,4); 
    // addEdge(2,1); 
    addEdge(2,3); 
    // addEdge(3,4); 
    // addEdge(3,2); 
    // addEdge(4,1);
    addEdge(4,3);
    addEdge(5,6);
    // addEdge(6,5);


    // for (int i = 1; i <= 6; i++) { 
    //     cout <<  i ; 
    //     for (auto x : adj[i]){ 
    //        cout << "-> " << x;
    //     }
    //     cout << endl;
    // } 

    // cout << endl;


    int cnt = 0;
    for(int i = 1 ; i <= 6 ; i++){
        if(!visited[i]){
            dfs(i);
            cout << cnt2 << endl;
            cnt2 = 0;
            cnt++;
        }
    }

    cout << endl;
    cout << cnt << endl;
    // dfs(1);
    
    
}