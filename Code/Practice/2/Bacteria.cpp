#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	long long x; cin >> x;
	cout << __builtin_popcountll(x) << '\n';	
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
