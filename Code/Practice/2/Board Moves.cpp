#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	
	ll val = 1;
	ll ans = 0;
	
	for(int i = 3 ; i <= n && val <= n/2; i+=2){
		ans += (long long)(4*(i-1)*val);
		val ++;
	}
	cout << ans << '\n';
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
