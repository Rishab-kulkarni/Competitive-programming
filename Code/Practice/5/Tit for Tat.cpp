
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];

	for(int i = 0 ; i < n-1 && k > 0 ; i++){
		if(a[i] < k){
			k -= a[i];
			a[n-1] += a[i];
			a[i] = 0;
		}
		else{
			a[i] -=k;
			a[n-1] += k;
			k = 0;
		}
	}
	for(auto val : a) cout << val << ' ';
	cout << '\n';
	
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
