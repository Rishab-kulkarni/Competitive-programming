
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	// if two chars same, no of ques b/w them are odd consider that substring
	// if two chars diff, no of ques b/w them are even consider that substring
	string s; cin >> s;
	int n = s.size();
	
	int ques = count(s.begin(), s.end(), '?');
	
	if(ques == n){
		cout << (ques*(ques + 1))/2 << '\n'; return;
	}
	
	
	ll cnt = 0, ans = 0;
	
	int len = 0;
	
	
	for(int i = 0 ; i < n ; ++i){
		if(s[i] == '?' && i - 1 >= 0){
			if(s[i-1] == '0'){
				s[i] = '1';
				len++;
				cnt = ((len+1)*(len+2))/2;
				
			}
			else if(s[i-1] == '1'){
				s[i] = '0';
				len++;
				cnt = ((len+1)*(len+2))/2;
				
			}	
		}
		else{
			if(s[i] == '0'){
				if(i - 1 < 0){
					cnt++;
					len++;
				}
				
				else if(s[i-1] == '1'){
					len++;
					cnt = ((len+1)*(len+2))/2;
				}
				else if(s[i-1] == '0'){
					ans += cnt;
					cnt = 0;
					len = 0;
				}
			}
			
			else if(s[i] == '1'){
				if(i -1 < 0){
					cnt++;
				}
				
				else if(s[i-1] == '0'){
					len++;
					cnt = ((len+1)*(len+2))/2;
				}
				else if(s[i-1] == '1'){
					ans += cnt;
					cnt = 0;
					len = 0;
				}
			}
		}
	}
//	if(cnt != 0) ans += cnt;
	cout << ans + n - 2<< '\n';
	
	
	
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
