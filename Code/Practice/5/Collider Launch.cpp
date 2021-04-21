
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<int> a(n); 
	for(int i = 0 ; i < n ; i++) cin >> a[i];	

	if(is_sorted(s.begin(), s.end())){
		cout << -1 << '\n';
		return;
	}
	
	int mn = INT32_MAX - 1;
	for(int i = 0 ; i < n-1 ; i++){
		if((s[i] == 'R' && s[i+1] == 'L')){
			mn = min(mn, abs(a[i] - a[i+1])/2);
		}
	}
	cout << mn << '\n';

}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
