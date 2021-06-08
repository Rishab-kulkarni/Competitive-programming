
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<int> hash_fn(string s){
	vector<int> h(26, 0);
	int n = s.size();
	
	for(int i = 0 ; i < n ; ++i) h[s[i] - 'a']++;
	return h;
	
}


void solve() {
	string s,t,p;
	cin >> s >> t >> p;
	
	// check for relative order of s and t;
	int s_sz = s.size(), t_sz = t.size(),p_sz = p.size();
	
	vector<int> hs = hash_fn(s);
	vector<int> ht = hash_fn(t);
	vector<int> hp = hash_fn(p);
	
	if(s_sz > t_sz){
		cout << "NO\n"; return;
	}
	
	bool ok = false; int j = 0;
	for(int i = 0 ; i < t_sz ; i++){
		if(s[j] == t[i]) j++;
		if(j >= s_sz){
			ok = true;
			break;
		}
	}
	
	if(ok){
		for(int i = 0 ; i < 26 ; ++i){
			if(hs[i] + hp[i] < ht[i]){
				cout << "NO\n"; return;
			}
		}
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
}
