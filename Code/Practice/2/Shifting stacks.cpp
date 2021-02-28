#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	
	int n; cin >> n;
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	ll sum = 0;
	for(int i = 1 ; i <= n ; i++){
		sum += a[i];
		if(sum < (i*(i-1))/2){
			cout << "NO\n"; return;
		}
	}
	cout << "YES\n";
	return;
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}




