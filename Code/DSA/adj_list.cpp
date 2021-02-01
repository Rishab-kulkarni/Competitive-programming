#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
#define test() int t;cin>>t;while(t--)
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vb vector<bool>

typedef long long ll;
typedef long double ld;

const ll MOD = 1000000007;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}



void adj_with_edges(){


    // (a,b) - nodes adj[a].pb({b,w}) 
    // w - weight
    vector<pair<int,int>> adj2[5];
   
    adj2[1].push_back({2,5});
    adj2[2].push_back({3,7});
    adj2[2].push_back({4,6});
    adj2[3].push_back({4,5});
    adj2[4].push_back({1,2});

    // tuple<int, int, int , int> t;
    
    // t = make_tuple(5,6,7,8);
    // cout << get<0>(t) << endl;

    for(int i = 1 ; i < 5 ; i++){
        cout << i;
        for(auto u : adj2[i]){
            cout << "-->" <<  "{" << u.first << ' ' << u.second << "}";
        }

        cout << endl;
    }
}


void edge_list(){

    // pair of nodes wherein edge is present b/w them
    // 5 is the no of edges
    vector<pair<int,int>> edge[5]; 

    edge->push_back({1,2});
    edge->push_back({2,3});
    edge->push_back({2,4});
    edge->push_back({3,4});
    edge->push_back({4,1});
    
    // along with weights - then use a tuple
    vector<tuple<int, int, int>> edge_w[5];

    edge_w->push_back({1,2,5});
    edge_w->push_back({2,3,7});
    edge_w->push_back({2,4,6});
    edge_w->push_back({3,4,5});
    edge_w->push_back({4,1,2});


    
}




int main(){

    fastio();
    
    #ifndef ONLINE_JUDGE
    open();
    #endif
    
    vector<int> adj[5];
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4);

    // adj_with_edges();
    // return 0;

    edge_list();
    return 0;


    // adj list rep.
    for (int i = 0; i < 5; i++) { 
        cout <<  i ; 
        for (auto x : adj[i]){ 
           cout << "-> " << x;
        }
        cout << endl;
    } 


    cerr << 1000*clock()/CLOCKS_PER_SEC << endl;
    return 0;


}