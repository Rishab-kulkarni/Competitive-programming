
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll INF = 1e18; 

void solve() {
	ll n,m;
	cin >> n >> m;
	
	vector<vector<pair<ll,ll>>> adj(n+1);	
		
	for(int i = 0 ; i < m ; i++){
		ll a,b, w; cin >> a >> b >> w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
	
	vector<ll> dist(n+1);
	vector<bool> vis(n+1);
	
	for(int i = 1 ; i <= n ; i++) dist[i] = INF;
	for(int i = 1 ; i <= n ; i++) vis[i] = false;
	
	
	priority_queue<pair<ll,ll>> pq;
	
	dist[1] = 0;
	pq.push({0, 1});				// (distance, node index)
	
	vector<int> p(n+1);
	
	while(!pq.empty()){
		int node = pq.top().second;
		pq.pop();
		if(vis[node]) continue;
		vis[node] = true;
		for(auto &val : adj[node]){
			 ll cost = val.second;
			 ll neighbor = val.first;
			 if(dist[node] + cost < dist[neighbor]){
			 	dist[neighbor] = dist[node] + cost;
			 	pq.push({-dist[neighbor], neighbor});
			 	p[neighbor] = node;
			 	
			 } 
		}
	}
	
	if(dist[n] == INF){
		cout << -1 << '\n';
	}
	
	else{
		vector<ll> path;
		path.push_back(n);
		
		int node = n;
		while(true){
			if(p[node] != 1){
				path.push_back(p[node]);
				node = p[node];
			}
			else{
				path.push_back(p[node]);
				break;
			}
		}
		
		reverse(path.begin(), path.end()); 
		for(auto val : path){
			cout << val << ' ';  
		}
		cout << '\n';
	}
	
	
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
