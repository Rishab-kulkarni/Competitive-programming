#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	map<int,int> mp;
	for(int i = 1 ; i <= n ; i++){
		int x; cin >> x;
		mp.insert({x,i});	
	}
	
	ll cnt1= 0, cnt2 = 0;
	int m; cin >> m;
	for(int i =1 ; i <= m ; i++){
		int elem; cin >> elem;
		cnt1 += mp[elem];
		cnt2 += (n - mp[elem] + 1);
	}
	
	cout << cnt1 << ' ' << cnt2 << '\n';
	
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
