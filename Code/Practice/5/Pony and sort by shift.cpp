
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	int idx = -1;
	int mn = INT32_MAX - 1;
	for(int i = 0 ; i < n ; i++){
		if(mn <= a[i]){
			mn = a[i];
			idx = i;
		}
	}
	
	bool ok = true;
	for(int i = idx; i != idx ; i++){
		if(i < n) ok &= (a[i] <= a[i+1]);		
		else if(i > n-1) i %= n;
	}
	cout << (ok ? n - idx - 1 : -1) << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
