#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dbg_out() { cerr << endl; }		
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", dbg_out(__VA_ARGS__)

void solve(){
	int n; cin >> n;
	map<int,vector<int>, greater<int>> mp;
	for(int i = 1 ; i <= n ; i++){
		int x ; cin >> x;
		mp[x].push_back(i);
	}
	
	int cnt = 1;
		
	vector<int> ans(n+1);		
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		vector<int> v = (*it).second;
		for(auto val : v){
			ans[val] = cnt;
			cnt++;
		}
	}
	
	dbg(n);	
	for(int i = 1 ; i <= n ; i++) cout << ans[i] << ' ';
	cout << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}
