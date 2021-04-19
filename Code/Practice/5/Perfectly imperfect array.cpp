
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	bool ok = false;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		if(floor(sqrt(a[i])) != ceil(sqrt(a[i]))){
			ok = true;
		}
	}
	cout << (ok ? "YES" : "NO") << endl;
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
