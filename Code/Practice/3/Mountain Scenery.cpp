	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int k,n;
	cin >> n >> k;
	vector<int>a(2*n + 1);
	for(int i = 0 ; i < 2*n + 1 ; i++) cin >> a[i];
	
	for(int i = 1 ; i < 2*n  ; i+=2){
		if(abs(a[i] - a[i-1]) == 1 || abs(a[i] - a[i+1])  == 1) continue;
		else {
			a[i]--;
			k--;
		}
		if(k == 0) break;
	}
	
	assert(k == 0);
	for(int i = 0 ; i < 2*n + 1; ++i) cout << a[i] << ' ';
	cout << '\n';
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
