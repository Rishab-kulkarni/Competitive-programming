
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	// try to break 101 if any
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	int cnt = 0;
	for(int i = 1 ; i < n-1 ; i++){
		if(a[i] == 0){
			if(a[i-1] == 1 && a[i+1] == 1){
				cnt++;
				a[i+1] = 0;
			}
		}
	}
	cout << cnt << '\n';
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}

