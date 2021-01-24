#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	set<char> sp = {'@', '#', '%', '&', '?'};
	
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		if(s.length() < 10){
			cout << "NO" << endl;
		}
		
		else{
			bool ok1 = false , ok2 = false, ok3 = false, ok4 = false;
			int cnt_up = 0, cnt_dig = 0;
			for(int i = 0 ; i < n ; i++){
//				if(isupper(s[i])) cnt_up++;
				if(islower(s[i])) ok2 = true;
//				else if(isdigit(s[i])) cnt_dig++;
				else if(sp.find(s[i]) != sp.end() && i!=0 && i!=n-1) ok4 = true;
			}
			
			
			for(int i = 0 ; i < n ; i++){
				if(isupper(s[i]) && i!=0 && i!=n-1) {
					cnt_up++;
				}
				if(isdigit(s[i]) && i!=0 && i!=n-1){
					cnt_dig++;
				}
			}
			
// 			cout << cnt_up << ' ' << cnt_dig << endl;
			if(cnt_up  >= 1 ) ok1 = true;
			if(cnt_dig >= 1) ok3 = true;
			cout << (ok1 && ok2 && ok3 && ok4 ? "YES" : "NO") << endl;
		}
	}
}
