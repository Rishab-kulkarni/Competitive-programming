#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n, t;
	cin >> n >> t;
	
	vector<ll> a(n);
	for(int i = 1 ; i < n ; ++i) cin >> a[i];
	
	if(t == 1){
		cout << "YES" << endl;
		return 0;
	}
	
	int ans = 1;	
	for(int i = 1 ; ans < t; i++){
		if(ans + a[ans] == t){
			cout << "YES" << endl;
			return 0;
		}
		
		 ans = ans + a[ans];
	}
	
	if(ans > t) cout << "NO" << endl;
	return 0;
	
}
