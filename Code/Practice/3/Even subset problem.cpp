	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int cnt = 0;
	vector<int>vals;
	for(int i = 0 ; i < n ; i++){
		if(a[i]%2 == 0){
			cout << 1 << '\n';
			cout << i+1 << '\n'; return;
		}
		else{
			cnt++;
			vals.push_back(i+1);
		}
		if(cnt >= 2) break;
	}
	
	if(cnt < 2){
		cout << -1 << '\n'; return;
	}
	
	cout << cnt << '\n';
	for(auto val : vals) cout << val << ' ';
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
