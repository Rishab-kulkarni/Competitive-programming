#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int k; string s;
	cin >> k >> s;
	if(k == 1){
		cout << s << endl;
		return 0;
	}
	
	int h[26] = {0};
	
	for(int i = 0 ; i < (int)s.size() ; ++i){
		h[s[i] - 'a']++;
	}
	
	for(int i = 0 ; i < (int)s.size() ; i++){
		if(h[s[i] - 'a']%k !=0){
			cout << -1 << endl;
			return 0;
		}
	}	
	
	string b, ans;
	for(int i = 0 ; i < 26 ; i++){
		if(h[i] !=0){
			for(int j = 0 ; j < h[i]/k ; j++) b += ('a' + i);
		}
	}
	
	while(k--){
		ans += b;	
	}
	
	cout << ans << endl;
}
