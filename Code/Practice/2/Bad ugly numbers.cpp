#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	
	if(n == 1){
		cout << -1 << '\n';
		return;
	}	
		
	string ans = "2";
	n--;
	while(n--) ans.push_back('3');
	
	cout << ans << '\n';
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}




