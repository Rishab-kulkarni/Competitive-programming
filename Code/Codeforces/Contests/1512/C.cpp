
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int a,b; cin >> a >> b;
	string s; cin >> s;
	
	int n = s.size();
	int rem0 = a - count(s.begin(), s.end(), '0');
	int rem1 = b - count(s.begin(), s.end(), '1');
	vector<int> idx;
	
	for(int i = 0 ; i < n/2 ; i++){
		if(s[i] == '?' && s[n-1-i] != '?'){
			if(s[n-1-i] == '0'){
				s[i] = '0';
				rem0--;
			}
			else if(s[n-1-i] == '1'){
				s[i] = '1';
				rem1--;
			}
 		}
		
		else if(s[i] != '?' && s[n-1-i] == '?'){
			if(s[i] == '0'){
				s[n-i-1] = '0';
				rem0--;
			}
			else if(s[i] == '1'){
				s[n-i-1] = '1';
				rem1--;
			}
 		}
		
		else if(s[i] == s[n-1-i] && s[i] == '?') idx.push_back(i);
		
		else if(s[i] != s[n-1-i]){
			cout << -1 << '\n';
			return;
		}
	}
	
	
	for(int i = 0 ; i < (int)idx.size() ; i++){
		if(rem0 >= 2){
			s[idx[i]]  = '0';
			s[n - idx[i] - 1] = '0';
			rem0-=2;
		}
		
		else if(rem1 >= 2){
			s[idx[i]] = '1';
			s[n - idx[i] - 1] = '1';
			rem1 -= 2;
		}
		else{
			cout << -1 << '\n';
			return;
		}
	}
		
	if(n & 1){
		if(s[n/2] == '?'){
			if(rem0 > 0){
				s[n/2] = '0';
				rem0--;
			}
			else if(rem1 > 0){
				s[n/2] = '1';
				rem1--;
			}
		}
	}	
		
	if(rem0 == 0 && rem1 == 0){
		assert(count(s.begin(), s.end(), '?') == 0);
		cout << s << '\n';
	}
	else cout << -1 << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
