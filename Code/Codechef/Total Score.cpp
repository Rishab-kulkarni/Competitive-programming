#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> a(k);
	for(int i = 0 ; i < k ; i++) cin >> a[i];
	
	vector<string> s(n);
	for(int i = 0 ; i < n ; i++) cin >> s[i];
	
	for(int i = 0 ; i < n ; i++){
		ll sum = 0;		
		for(int j = 0 ; j < (int)s[i].length() ; j++){
			if(s[i][j] == '1') sum += a[j];
		}
		
		cout << sum << '\n';
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}
