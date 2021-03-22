	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,d;
	cin >> n >> d;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int ans = 0;
	for(int i = 1 ; i < n ; i++){
		if(a[i-1] >= a[i]){
			int diff = a[i-1] - a[i];
			int val = (diff/d + 1);
			ans += val;
			a[i] += d*val;
		} 
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
