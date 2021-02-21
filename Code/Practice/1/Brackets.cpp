#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; string s;
	cin >> n >> s;
	int ans = 0, cnt = 0;
	
		
	// the idea is to keep track of the count of ) - cnt 
	// decrement cnt when ( occurs, if cnt = 0, at that pos we have balanced brackets
	// if at any time cnt < 0, mismatch in brackets, so at that time just move one bracket ahead of the string
	
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '(') cnt++;
		else{
			cnt--;
			if(cnt < 0){
				cnt = 0;
				ans++;
			}
		}
	}
		
	cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}		
}
