
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,x,y;
	cin >> n >> x >> y;
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	
	if(x <= y) {
		int cnt = 0;
		for(int i = 0 ; i < n ; i++) cnt += (a[i] <= x);
		
		cout << (cnt + 1)/2 << '\n';
	}

	else{
		cout << n << '\n';	
	}
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
