	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	char a[n][n];
	set<char>s;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> a[i][j];
			if(i!=j && i + j != n -1) s.insert(a[i][j]);
		}
	}
	
	char tmp = a[0][0];
	for(int i = 0 ; i < n ; i++){
		if(a[i][i] != tmp){
			cout << "NO\n"; return;
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		if(a[i][n-1-i] != tmp){
				cout << "NO\n"; return;
		}
	}

	if((int)s.size() == 1 && *s.begin() != tmp){
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
