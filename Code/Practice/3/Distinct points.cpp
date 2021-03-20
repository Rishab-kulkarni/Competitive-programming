	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll l1,r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	
	ll avg1 = (l1 + r1)/2;
	ll avg2 = (l2 + r2)/2;
	
	if(avg1 == avg2){
		cout << l1 << ' ' << r2 << '\n'; 
		return;
	} 
	
	cout << avg1 << ' ' << avg2 << '\n';
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
