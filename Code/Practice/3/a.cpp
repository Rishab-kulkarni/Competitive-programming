	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	
	
	int tmp = n;
	for(int i = 0 ; i < n ; i++){
		string s(tmp, ' ');
		cout << s;
		for(int j = 0 ; j <= i ; j++) cout << j << ' ';
		
		cout << '\n'; 
		tmp--;
	}
	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
}
