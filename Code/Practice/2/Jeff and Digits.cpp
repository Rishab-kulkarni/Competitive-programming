#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	int cnt_5 = 0, cnt_0 = 0;
	for(int i = 0 ; i < n ; i++){
		int x ; cin >> x;
		if(x == 5) cnt_5++;
		else cnt_0++;
	}
	
	if(cnt_0 == 0){
		cout << -1 << endl; return;
	}
	
	
	cnt_5 /= 9;
	
	string ans = "";
	while(cnt_5--){
		ans += "555555555";
	}
	
	if(!ans.empty()) while(cnt_0--) ans += "0";
	else{
		if(cnt_0 >= 1) ans += "0";
	}
	cout << (ans.empty() ? "-1" : ans) << '\n';
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
