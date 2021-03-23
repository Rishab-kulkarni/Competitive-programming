	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int a,b;
	cin >> a >> b;
	
	int ans = min(a,b);
	
	a-= ans;
	b-= ans;
	
	cout << ans << ' '; 
	if(a!=0) cout << a/2 << ' ';
	else if(b!=0) cout << b/2 << ' ';
	else if(a == 0 && b == 0) cout << 0 << ' ';
	
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
