	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,d;
	cin >> n >> d;
	
	if(d <= n){
		cout << "YES\n"; return;
	}
	
	for(int i = 1 ; i <= n ; i++){
		ll val = i + (d + i)/(i + 1);
		if(val <= n){
			cout << "YES\n"; return;
		}
	}
	
	cout << "NO\n";
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
