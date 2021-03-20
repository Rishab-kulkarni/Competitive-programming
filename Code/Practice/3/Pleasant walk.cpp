	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int ans = 0, cnt = 0, prev = 0;
	
	for(int i = 0 ; i < n ; i++){
		if(a[i] != prev) cnt++;
		else{
			cnt = 1;
		}
		ans = max(ans, cnt);
		prev = a[i];
	}
	cout << ans << '\n';
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
