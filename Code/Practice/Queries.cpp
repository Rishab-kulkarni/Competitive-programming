#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> a;
vector<int> pref;
string s; int n;

void precompute(){

	a.resize(n+1);
	for(int i = 0 ; i < n ; i++){
		if(s[i] == s[i+1]){
			a[i+1] = 1;
		} 
	}
	
	pref.resize(n+1);
	int sum = 0;
	for(int i = 1 ; i <= n ; i++){
		sum += a[i];
		pref[i] = sum;
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
		r--; l--;
		cout << pref[r] - pref[l] << '\n';
	}
}
