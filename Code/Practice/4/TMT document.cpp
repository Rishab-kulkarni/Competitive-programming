
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	// check 2*M == T
	// try to take the very first T, and very first M and very first T after the first M considered
	// binary search?
	
	int cnt_t = count(s.begin(), s.end(), 'T');
	int cnt_m = count(s.begin(), s.end(), 'M');
	
	if(cnt_t != 2*cnt_m){
		cout << "NO\n";
		return;
	}
	
	bool ok = true;
	cnt_t = 0, cnt_m = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == 'T') cnt_t++;
		else{
			cnt_m++;
			if(cnt_m > cnt_t){
				cout << "NO\n"; ok = false;return;
			}
		}	
	}
	
	cnt_t = 0, cnt_m = 0;
	for(int i = n-1 ; i >= 0 ; i--){
		if(s[i] == 'T') cnt_t++;
		else{
			cnt_m++;
			if(cnt_m > cnt_t){
				cout << "NO\n"; ok =false;return;
			}
		}	
	}
	
	assert(ok);
	cout << "YES\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
    	solve();
	}
}

