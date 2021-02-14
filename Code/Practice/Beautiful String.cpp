#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		vector<char> st = {'a', 'b', 'c'};
			
		int n = s.size();
		bool ok = false;
		for(int i = 0 ; i < n-1; i++){
			if(s[i] == s[i+1] && s[i] != '?'){
				cout << -1 << endl; ok = true;
				break;
			}
		}
		
		if(!ok){
			for(int i = 0 ; i < n ; i++){
				if(s[i] == '?'){
					vector<bool>taken(3,false);
					char prev = s[i-1];
					char next = s[i+1];
					if(prev != '?'){
						int idx = find(st.begin(), st.end(), prev) - st.begin();
						taken[idx] = true;
					}
					
					if(next != '?'){
						int idx2 = find(st.begin(), st.end(), next) - st.begin();
						taken[idx2] = true;
					} 
					
					int lol = find(taken.begin(), taken.end(), false) - taken.begin();
					s[i] = st[lol];
					taken.clear();
				}
			}
			cout << s << endl;
		}	
	}
}
