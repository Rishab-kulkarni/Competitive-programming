

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	int cnt = 0;	
	for(int i = 0 ; i < n-1 ; i++){
		cnt += a[i+1] > a[i];
	}
	cout << cnt << '\n';
}


int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
