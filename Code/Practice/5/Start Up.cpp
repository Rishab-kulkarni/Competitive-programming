
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s;
	cin >> s;
	
	vector<char> a = {'A', 'H', 'I', 'M', 'O', 'U', 'V', 'W', 'X', 'Y', 'T'};
	int h[26] = {0};
	for(int i = 0 ; i < (int)s.length() ; i++){
		h[s[i] - 'A']++;
	}
	
	string s1 = s;
	reverse(s1.begin(), s1.end());
	bool ok = (s == s1);
	
	for(char i = 'A' ; i <= 'Z' ; i++){
		if(find(a.begin(), a.end(), i) == a.end()){
			ok &= (h[i - 'A'] == 0);
		}
	}
	cout << (ok ? "YES" : "NO") << '\n';
}

int main(){

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
//	cin >> t;
	while(t--){
    	solve();
	}
}
