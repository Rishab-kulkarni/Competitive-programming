
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n+1);
	
	a[0] = 0;
	for(int i = 1 ; i <= n ; ++i) cin >> a[i];
	
	int cnt = 0;
	int energy = 0;
	for(int i = 0 ; i < n ; i++){
		energy += (a[i] - a[i+1]);
		if(energy < 0){
			cnt += abs(energy);
			energy = 0;
		}
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
