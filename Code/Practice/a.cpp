#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string s; int n;
map<pair<int,int>,int>st;
void precompute(){
	for(int i = 0; i < n ; i++){
		for(int j = i+1 ; j < n ; j++){
			int cnt = 0;
			for(int k = i ; k < j ; k++){
				if(s[k] == s[k+1]) cnt++;
			}
			st[{i,j}] = cnt;
		}
	}
}


int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> s;
	n = s.length();
	
	precompute();
	
	int m; cin >> m;	
	while(m--){
		int l,r;
		cin >> l >> r;
		cout << st[{l,r}] << '\n';
	}
}
