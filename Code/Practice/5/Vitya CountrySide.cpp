
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	if(n == 1){
		if(a[0] == 15) cout << "DOWN" << '\n';
		else if(a[0] == 0) cout << "UP" << '\n';
		else cout << -1 << '\n';
		return;
	}
	
	// no matter what goes down
	if(a[n-1] == 15){
		cout << "DOWN\n";return;
	}
	
	if(a[n-1] == 0){
		cout << "UP\n"; return;
	}
	
	// -1 or 1
	cout << (a[n-1] - a[n-2] == 1 ? "UP" : "DOWN") << '\n';
}

int main(){

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
