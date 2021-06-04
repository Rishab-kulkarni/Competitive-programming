
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	vector<int> a(4);
	
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	
	int w1 = max(a[0], a[1]);
	int w2 = max(a[2], a[3]);
	
	sort(a.begin(), a.end());
	
	if((w1 == a[3] && w2 == a[2]) || (w1 == a[2] && w2 == a[3])){
		cout << "YES\n";
	} 
	else cout << "NO\n";
	
		
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
	cin >> t;
 	while(t--) {
 		solve();
 	}
}
