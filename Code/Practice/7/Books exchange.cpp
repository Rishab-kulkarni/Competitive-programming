
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x)  {cerr << '('; for (auto &i: x) cerr <<  (" "), __print(i); cerr << ')';}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const int N = 2e5 + 5;
vector<vector<int>> adj(N);
vector<bool> vis(N,false);
vector<int> comp;

void dfs(int v){
	vis[v] = true;
	comp.push_back(v);
	for(auto u : adj[v]){
		if(!vis[u]){
			dfs(u);
		}
	}
}


void solve() {
	int n; cin >> n;
	for(int i = 1 ; i <= n ; ++i){
		int x; cin >> x;
		adj[x].push_back(i);
//		adj[i].push_back(x);
	} 
//	
//	for(int i = 1 ; i <= n ; ++i){
//		cout << i << "--->";
//		for(auto val2 : adj[i]) cout << val2 << ' ';
//		cout << '\n';
//	}
//	return;
	
	
	vector<int> ans(n+1, -1);
	for(int i = 1 ; i <= n ; ++i){
		// connected components;
		if(!vis[i]){
			comp.clear();
			dfs(i);
			for(auto val : comp) ans[val] = int(comp.size());
		}
	}
	
	for(int i = 1 ; i <= n ; ++i) cout << ans[i] << ' ';
	cout << '\n';
	
	for(int i = 1 ; i <= n ; ++i) vis[i] = false;
	for(int i = 0 ; i <= n; ++i)  adj[i].clear();	
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
