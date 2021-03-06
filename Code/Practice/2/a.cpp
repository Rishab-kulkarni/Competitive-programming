#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	
	cout << n << ' '; 
	for(int i = 1 ; i < n ; i++){
		cout << i << ' '; 
	}
	cout << '\n'; 
	
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
