
// https://codeforces.com/blog/entry/90342?#comment-788336
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	
	// get everything to middle is better
	int l = 0;
	int r = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '*'){
			l = i; break;
		}
	}
	
	for(int i = n-1 ; i >=0 ; i--){
		if(s[i] == '*'){
			r = i; break;
		}
	}
	
	int left = 0 ;ll ans = 0;
	int allSheeps = count(s.begin(), s.end(), '*');
	for(int i = l ; i <= r ; ++i){
		if(s[i] == '.'){
			ans += min(left, allSheeps - left);
		}
		
		else{
			left++;
		}
	}
	cout << ans << '\n';
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
