
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	int n; cin >> n;
	ll mx1 = -1, mn1 = INT32_MAX - 1, mx2 = -1,mn2 = INT32_MAX - 1;
	
	vector<int> a,b;
	
	for(int i = 0 ; i < n ; i++){
		ll x; cin >> x;
		a.push_back(x);
		mx1 = max(x, mx1);
		mn1 = min(x, mn1);
	} 		
	
	for(int i = 0 ; i < n ; i++){
		ll x; cin >> x;
		b.push_back(x);
		mx2 = max(x, mx2);
		mn2 = min(x, mn2);
	}
	
	auto brute = [] (vector<int> a, vector<int> b)-> void{
		int k = a.size();
		int mx = -1;
		int mn = 100000000;
		for(int i = 0 ; i < k ; i++){
			for(int j = 0 ; j < k ; j++){
				val = a[i] + b[j];
				mn = min(mx,mn);
			}
		}
		cout << mn << '\n';
	};
	
//	brute(a,b);
	cout << mx1 + mx2 << '\n';
//	cout <<  max(mn1 + mx2, mx1 + mn2) << '\n';
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
