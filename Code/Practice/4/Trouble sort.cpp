
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	int n; cin >> n;
	vector<int> a(n);
	int cnt[2] = {0};
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < n ; i++){
		int x;cin >> x;
		cnt[x]++;
	}
	
	if(cnt[0] == 0 || cnt[1] == 0){
		cout << (is_sorted(a.begin(), a.end()) ? "Yes" : "No") << '\n';
		return;
	}
	cout << "Yes\n";
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

