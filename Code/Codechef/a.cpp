#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int n;
vector<string> s;

void solve(){
	int cnt = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(i!=j && s[i][0] != s[j][0]){
				cnt++;
			}
		}
	} 	
	cout << cnt << '\n';
		
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		cin >> n;
		s.clear();
		for(int i = 0 ; i < n ; i++){
			string str;
			cin >> str;
			s.push_back(str);
		}
		solve();
	}	
}
