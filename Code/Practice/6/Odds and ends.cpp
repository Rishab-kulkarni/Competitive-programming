
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n ; cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	
	cout << (((n & 1) && (a[0] & 1) && (a[n-1] & 1)) ? "Yes" : "No") << '\n';
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
