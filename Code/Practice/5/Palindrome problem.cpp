
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// any element freq  >= 3 answer yes
	// else depending on the position check the answer
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}

	for(int i = 0 ; i < n-2 ; i++){
		if(find(a.begin() + i+2, a.end(), a[i]) != a.end()){
			cout << "YES\n";
			return;
		};
	}
	cout << "NO\n";
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
