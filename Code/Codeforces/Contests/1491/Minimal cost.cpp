#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n,u,v;
	int mx = INT32_MAX - 1;
	cin >> n >> u >> v;
	vector<int> a(n+1);
	for(int i = 1 ; i<= n ; i++) cin >> a[i];		
	for(int i = 1 ; i < n ; i++){
		if(abs(a[i+1] - a[i]) > 1){
			cout << 0 << '\n';
			return;
		} 	
	}
	
	
	for(int i = 1 ; i < n ; i++){
		if(a[i] == a[i+1]){
			mx = min({mx,2*v, u + v}); 
		}
		else mx = min({mx, u,v});
	}	
//	dbg(mx);	
	cout << mx << '\n';
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
