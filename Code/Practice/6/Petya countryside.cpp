
// Not my sol
// https://codeforces.com/contest/66/submission/116307083

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	
	
	int mx = -1;	
	for(int i = 0 ; i < n ; i++){
		int tmp1 = 1;
		
		int elem = a[i];
		for(int j = i-1 ; j >= 0 ; j--){
			if(a[j] <= elem) {
				tmp1++;
				elem = a[j];
			}
			else break;
		}
		
		elem = a[i];
		for(int j = i+1 ; j < n ; j++){
			if(a[j] <= elem) {
				tmp1++;
				elem = a[j];
			}
			else break;
		}
		
		mx = max(tmp1, mx); 
	}
	cout << mx << '\n';
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
