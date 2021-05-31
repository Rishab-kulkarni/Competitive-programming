
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n,m,mn,mx;
	cin >> n >> m >> mn >> mx;
	
	bool ok1 = false;
	bool ok2 = false;
	bool isMinPresent = false;
	bool isMaxPresent = false;
	
	for(int i = 0 ; i < m ; ++i){
		int x;cin >> x;
		if(x < mn) ok1 = true;
		if(x > mx)ok2 = true;
		if(x == mn) isMinPresent = true;
		if(x == mx) isMaxPresent = true;
	}
	
	if(ok1 || ok2){
		cout << "Incorrect\n"; return;
	}
	
	if(isMinPresent && isMaxPresent){
		cout << "Correct\n"; return;
	}

	// both not present check n - m >= 2
	// one of them not present check n-m >= 1
	if(!isMinPresent && !isMaxPresent){
		cout << (n - m >= 2 ? "Correct" : "Incorrect") << '\n'; return;
	}	
	
	if((isMinPresent && !isMaxPresent) || (!isMinPresent && isMaxPresent)){
		cout << (n - m >= 1 ? "Correct" : "Incorrect") << '\n'; return;
	}
	assert(false);
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
