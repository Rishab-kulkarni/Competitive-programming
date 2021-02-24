#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	
	string ans;
	int cnt = (n + 3)/4;
	int val = n - cnt;
	while(val--) ans.push_back('9');
	while(cnt--) ans.push_back('8');
	
	cout << ans << '\n';
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}




