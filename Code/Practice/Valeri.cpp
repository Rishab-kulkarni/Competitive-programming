#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> b(n);
	for(int i = 0 ;i < n ; i++){
		cin >> b[i];
	}
	
	set<int> s;
	for(int i = 0; i < n ; i++){
		s.insert(b[i]);
	}
	
	cout << ((int)s.size() == n ? "NO" : "YES") << '\n';
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}		
}
