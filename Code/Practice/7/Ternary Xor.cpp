
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	string s;
	cin >> s;
	
	string a,b;
	
	bool first_1 = false;
	
	for(int i = 0 ; i < n ; ++i){
		if(s[i] == '2'){
			if(!first_1){
				a.push_back('1');
				b.push_back('1');
			}
			
			else{
				a.push_back('0');
				b.push_back(s[i]);
			}
			
		}
		else if(s[i] == '1'){
			if(!first_1){
				a.push_back('1');
				b.push_back('0');
				first_1 = true;
			}
			else{
				a.push_back('0');
				b.push_back('1');	
			}
		}
		else{
			a.push_back('0');
			b.push_back('0');
		}
	}
	
	assert(int(a.size()) == n);
	assert(int(b.size()) == n);
	
	cout << a << '\n' << b << '\n';
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
