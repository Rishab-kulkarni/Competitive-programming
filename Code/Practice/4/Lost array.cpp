
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<int> a(n+1);
	a[0] = 0;
	for(int i = 0 ; i < n ; i++) cin >> a[i+1];
	
	vector<int>b(n+1);
	for(int i = 1 ; i <= n ; i++) b[i] = a[i] - a[i-1];
	
	vector<int> ans;
	for(int i = 1 ; i <= n ; i++){
		bool ok = true;
		for(int j = 1 ; j + i<= n ; j++){
			if(b[j] != b[j+i]){
				ok = false;
				break;
			}
		}
		if(ok) ans.push_back(i);
	}
	
	assert(ans.size() != 0);
	cout << ans.size() << '\n';
 	for(auto val : ans) cout << val << ' ';
	cout << '\n'; 
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}

