#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	
	ll x,y,a,b;
	cin >> x >> y >> a >> b;
	
	ll ans = (max(x,y) - min(x,y))*a + min(x,y)*b;
	cout << ans << '\n';
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}




