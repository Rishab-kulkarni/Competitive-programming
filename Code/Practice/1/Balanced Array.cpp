#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	
	if((n/2)%2 == 1){
		cout << "NO\n"; return;
	}
	
	cout << "YES\n";
	for(int i = 2 ; i <= n ; i+=2){
		cout << 2*i << ' ';
	}
	bool ok = true;
	for(int i = 2 ; i <= n ; i+= 2){
		cout << (ok ? 2*i -1 : 2*i+1) << ' ';
		ok = !ok;   
	}
	cout << '\n';		
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
