#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n, m;
	cin >> n >> m;
	
	vector<vector<char>> a(n, vector<char>(m,'B'));
	
	a[0][0]= 'W';
	for(auto v : a){
		for(auto val : v){
			cout << val ; 
		}
		cout << '\n';
	}
}

int main(){

	int t = 1; 
	cin >> t;
	while(t--){
		solve();	
	}
}
