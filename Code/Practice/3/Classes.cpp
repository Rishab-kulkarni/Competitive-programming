	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	vector<string> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	
	int cnt = 0;
	for(int j = 0 ; j < 7 ; j++){
		int tmp = 0;
		for(int i = 0 ; i < n ; i++){
			if(a[i][j] == '1') tmp++;
		}
		cnt = max(tmp,cnt);
	}
	cout << cnt << '\n';
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
