#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1e9 + 7;

void solve(){
	int n; cin >> n;
	vector<int> a(n+1);
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	vector<int> ans(n+1);
	
	int mx = 0;
	for(int i = n ; i >= 1 ; --i){
		if(i == n){
			ans[i] = 0;
			mx = max(a[i],mx);			
			continue;
		} 
		if(mx == a[i]){
			ans[i] = 1;
		}
		
		else if(a[i] > mx){
			ans[i] = 0;
			mx = a[i];
		}
		
		else{
			ans[i] = mx - a[i] + 1;
		}
		
	}
	
	for(int i = 1 ; i <= n ; i++) cout << ans[i] << ' ';
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
