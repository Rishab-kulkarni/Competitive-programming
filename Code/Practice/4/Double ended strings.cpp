#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	// find the longest common substring
	string a,b;
	cin >> a >> b;
	
	int sz1 = a.size();
	int sz2 = b.size();
	
	int mx = 0;
	for(int i = 0 ; i < sz1 ; i++){
		for(int j = 0 ; j < sz2 ; j++){
			for(int k = 1 ; k <= sz1 - i ; k++){
				for(int l = 1 ; l <= sz2 - j ; l++){
					if(a.substr(i, k) == b.substr(j,l)){
						mx = max(mx, (int)b.substr(j,l).length());
					}
				}
			}
		}
	}
	
	cerr << mx << '\n';
	cout << sz1 + sz2 - abs(2*mx) << '\n';
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
