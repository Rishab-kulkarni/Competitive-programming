
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	string s;
	cin >> s;
	
	int n = s.size();
	int i = 0;
	while(i < n){
		if(s[i] == 'p'){
			string temp;
			for(int j = i ; j < i + 5 && j < n; j++){
				temp.push_back(s[j]);
			}
			
			if(temp == "party"){
				s[i] = 'p', s[i+1] = 'a', s[i+2] = 'w', s[i+3] = 'r', s[i+4] = 'i';
				i+= 5;
			}
			else i++;
		}
		else i++;	
	}
	cout << s << '\n';
}

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}

