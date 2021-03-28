
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll x,y; 
	cin >> x >> y;
	
	if(x == 1){
		if(y == 1) cout << "YES\n";
		else cout << "NO\n";
		return;
	}
	
	if(x >= y){
		cout << "YES\n"; return;
	}
	
	if(x < y){
		ll val = x;
		while(x < y){
			if(x & 1) x--;
			else{
				x = 3*x/2;
			}
			if(val == x){
				cout << "NO\n";
				return;
			}
		}	
	}
	cout << "YES\n";
	
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

