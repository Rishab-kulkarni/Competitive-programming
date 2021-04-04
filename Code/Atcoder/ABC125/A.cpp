#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	int a,b,t;
	int cnt = 0;
	cin >> a >> b >> t;		
	
	for(int i = a ; i <= t ; i+=a){
		cnt += b;
	}
	cout << cnt << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
