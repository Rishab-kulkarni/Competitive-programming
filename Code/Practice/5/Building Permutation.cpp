
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(), a.end());
	
	ll cnt = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != i+1){
			cnt += abs(a[i] - (i+1));
		}
	}
	cout << cnt << '\n';
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
