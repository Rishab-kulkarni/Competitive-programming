
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n; string a,b;
	cin >> n >> a >> b;
	
	vector<int> prefs;
	for(int i = n-1 ; i >= 0 ; i--){
		if(a[i] != b[i]){
			// compare a[0] and b[i]
			if(a[0] == b[i]){
				prefs.push_back(1);
				if(a[0] == '0') a[0] = '1';
				else a[0] = '0'; 
			}
			
			for(int j = 0 ; j <= i ; ++j){
				a[j] = (a[j] == '0' ? '1' : '0');
			}
			prefs.push_back(i+1);
		}
	}
	cout << prefs.size() << ' ';
	for(auto val : prefs ) cout << val << ' ';
	cout << '\n';
	
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
