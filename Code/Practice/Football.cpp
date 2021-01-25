#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int cnt = 1;
	for(int i = 0 ; i < s.length() -1  ; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
		else{
			cnt = 1;
		}
		if(cnt >= 7){
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
}
