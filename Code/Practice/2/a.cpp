#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

	int a[3][3];
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++) cin >> a[i][j];
	}

	vector<vector<int>>ans(3,vector<int>(3,1));
//	int x; 
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
//			cin >> x;
			if(a[i][j]%2 != 0 && a[i][j]!=0){
				ans[i][j]++;
				if(i-1 > -1) ans[i-1][j]++;
				if(i+1 < 3) ans[i+1][j]++;
				if(j - 1 > -1) ans[i][j-1]++;
				if(j + 1 < 3) ans[i][j+1]++; 
			}
		}
	}
	
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			cout << (ans[i][j]%2 == 0 ? "0" : "1");
		}
		cout << '\n';
	}
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
