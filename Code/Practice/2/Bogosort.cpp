#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.rbegin(), a.rend());
	for(auto val : a) cout << val << ' ';
	cout << '\n';	
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
