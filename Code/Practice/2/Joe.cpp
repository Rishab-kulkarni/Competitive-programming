#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	long double ans = 0;
	
	for(int i = 1 ; i <= n ; i++){
		ans += (1.0/(double)i);
	}
	
	cout << fixed << setprecision(16) << ans << '\n';
}

int main(){

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
