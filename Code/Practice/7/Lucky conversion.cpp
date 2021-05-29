
// Not my original sol, peeked the edi
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	string a,b; cin >> a >> b;
	int n = a.size();
	
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != b[i]){
			if(a[i] == '4') cnt1++;
			else cnt2++;
		}	
	}
	// no of swaps = min(cnt1,cnt2) + digit changes
	cout << min(cnt1,cnt2) + abs(cnt1 - cnt2) << '\n';
	
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
// 	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
