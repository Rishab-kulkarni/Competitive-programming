	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
	map<int,int> mp;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	
	ll cnt = 0;
	for(int i = 0 ; i < n ; i++){
		cnt += (n - mp[a[i]]);
	}
	cout << cnt/2 << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
}
