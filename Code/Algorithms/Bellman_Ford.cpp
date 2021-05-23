
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1e18;
struct edge{
	int a,b,cost;
};

void solve(){
	
	int nodes, edges;	// no of nodes, edges
	cin >> nodes >> edges;
	
	vector<edge>e;
	for(int i = 0 ; i < edges ; i++){
		int u,v,w;
		cin >> u >> v >> w;
		--u;
		--v;
		e.push_back({u,v,w});
	}	
	
	vector<ll> dist(nodes, INF);
	
	int start_node = 0;
	dist[start_node] = 0;
	
	for(int i = 0 ; i < nodes - 1; ++i){
		for(auto val : e){			// iterating through all the edges
			int start = val.a;
			int end = val.b;
			int cost = val.cost;
			if(dist[start] < INF){
				if(dist[start] + cost < dist[end]){
					dist[end] = dist[start] + cost;
				}
			}
		}
	}
	
	for(auto val : dist) cout << val << ' ';
	cout << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
