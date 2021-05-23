
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll a,b,n,m;
	cin >> a >> b >> n >> m;
	
	if(a < b){
		cout << "No\n";
		return;
	}	
		
	if(n == 0 || m == 0){
		if(n == 0 && m == 0){
			cout << "Yes\n"; return;
		}
		if(n == 0) cout << (a + b >= m ? "Yes" : "No") << '\n';
		if(m == 0) cout << (a + b >= n ? "Yes" : "No") << '\n'; 
		return;
	}
	
	cout << (a + b >= n + m ? "Yes" : "No") << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
