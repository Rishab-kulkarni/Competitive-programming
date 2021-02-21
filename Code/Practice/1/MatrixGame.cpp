#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n ; ++i){
			for(int j = 0 ; j < m ; ++j) cin >> a[i][j];
		}
		
		int ch = 0;
		int rows = 0, cols = 0;
		for(int i = 0 ; i < n ; i++){
			bool ok = true;
			for(int j = 0 ; j < m ; j++){
				if(a[i][j] == 1){
					ok = false; break;
				}
			}
			if(ok) rows++;
		}
		
		for(int j = 0 ; j < m ; j++){
			bool ok = true;
			for(int i = 0 ; i < n ; i++){
				if(a[i][j] == 1){
					ok = false; break;
				}
			}
			if(ok) cols++;
		}
		
		int val = min(rows, cols);
		cout << (val & 1 ? "Ashish" : "Vivek") << '\n';		
	}

}
