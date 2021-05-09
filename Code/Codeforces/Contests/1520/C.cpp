
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){	
	int n; cin >> n;
	
	if(n == 2){
		cout << -1 << '\n'; return;
	}
	vector<vector<int>> ans(n, vector<int> (n));
	
	int ptr1 = 1, ptr2 = n*n;	
	bool ok = true;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(ok){
				ans[i][j] = ptr2;
				ptr2--; 
			}
			else{
				ans[i][j] = ptr1;
				ptr1++;
			}
			ok = !ok;
		}
	}
	
	swap(ans[0][0], ans[n - 1][n - 1]);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++) cout << ans[i][j] << ' ';
		cout << '\n';
	}
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
