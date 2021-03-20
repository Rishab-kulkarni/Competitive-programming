	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,d;
	cin >> n >> d;
	vector<int>days;
	for(int i = 0 ; i < d ; i++){
		string s; cin >> s;
		if(count(s.begin(), s.end(), '1') < n) days.push_back(i+1);
	}
	
	int cnt = 0, ans = 0;
	
	if(days.empty()){
		cout << 0 << '\n';
		return;
	}
	
	// can be done in O(1) space ?
	for(int i = 0 ; i < (int)days.size() - 1 ; i++){
		if(abs(days[i+1] - days[i]) == 1) cnt++;
		else cnt = 0;
		ans = max(ans, cnt);
	}
	
	cout << ans + 1 << '\n';
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
