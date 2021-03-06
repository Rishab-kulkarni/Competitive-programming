#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int k; cin >> k;
	vector<int> a(12);
	for(int i = 0 ; i < 12 ; i++) cin >> a[i];
	
	sort(a.rbegin(), a.rend());
	if(k == 0){
		cout << 0 << '\n'; return;
	}
	
	if(accumulate(a.begin(), a.end(),0) < k){
		cout << -1 << '\n'; return;
	}
	
	int cnt = 0;
	int cur_sum = 0;
	for(int i = 0 ; i < 12 ; i++){
		cur_sum += a[i];
		if(cur_sum < k) cnt++;
		else break;
	}
	cout << cnt + 1<< '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
