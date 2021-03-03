#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	int n = s.size();
	
	vector<string>perms;
	for(int mask = 0 ; mask < (1 << n) ; mask++){
		string temp;
		for(int i = 0 ; i < n ; i++){
			if(mask & (1 << i)){
				temp.push_back(s[i]);
			}
		}
		string tmp2 = temp;
		reverse(temp.begin(), temp.end());
		if(tmp2 == temp) perms.push_back(temp);
	}
	sort(perms.begin(), perms.end());
	cout << perms[(int)perms.size() - 1] << '\n';
}

int main(){

	ios::sync_with_stdio(false); 
	cin.tie(0);

	int t = 1; 
//	cin >> t;
	while(t--){
		solve();	
	}
}
