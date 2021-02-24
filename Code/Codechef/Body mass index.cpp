#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll m,h;
	cin >> m >> h;
	
	ll val = h*h;
	ll ans = m/val;
	
	
	if(ans <= 18){
		cout << 1 << '\n';
	}
	
	else if(ans >=19 && ans <=24){
		cout << 2 << '\n';
	}
	
	else if(ans >= 25 && ans <=29){
		cout << 3 << '\n';
	}
	
	else if(ans >=30) cout << 4 << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

