#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,m, cnt = 0, sum = 0, ans = 10000000;
		cin >> n >> m;
		vector<vector<int>>a(n, vector<int>(m));
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> a[i][j];
				sum += abs(a[i][j]);
				if(a[i][j] <= 0){
					cnt++;
					a[i][j] *= (-1);	
				}
					
			}
		}
		
		if(cnt%2 == 0) cout << sum << '\n';
		else {
			for(auto row : a){
				int mn = *min_element(row.begin(), row.end());
				ans = min(mn,ans);
			}
			
			cout << sum - 2*ans << '\n';
		}
	}	
}
