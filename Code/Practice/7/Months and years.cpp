
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
//	vector<int> days2 = {31,29,31,30,31,30,31,31,30,31,30,31};
	
	int n; cin >> n;
	vector<int> a(n);
	
//	bool has_29 = false;
	
	int cnt = 0;
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		if(a[i] == 29){
			a[i]--;
			cnt++;
		}
	}
	
	if(cnt > 1){
		cout << "NO\n"; return;
	}
	
	
//	if(has_29) days[1] += 1;
	
	int idx = 0;
	while(idx <= 11){
		
		int tmp = idx;
		int tmp2 = 0;
		bool ok = true;
		while(tmp2 < n){
			if(days[tmp] == a[tmp2]){
				tmp = (tmp + 1)%12;
				tmp2++;
			}
			else{
				ok = false;
				break;
			}
		}
		
		if(ok){
			cout << "YES\n"; return;
		}
		idx++;
	}
	cout << "NO\n";
}

int main() {
 
 	ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	
 	int t = 1;
//	cin >> t;
 	while(t--) {
 		solve();
 	}
 }
