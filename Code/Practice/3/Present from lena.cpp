	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >> n;
	
	
	int tmp = 2*n ;
	for(int i = 0 ; i <= n ; i++){
		string s(tmp, ' ');
		cout << s;
		string val;
		for(int j = 0 ; j <= i ; j++){
			val.push_back('0' + j);
			val.push_back(' '); 
		}
		for(int j = i-1 ; j >= 0 ; j--){
			val.push_back('0' + j);
			val.push_back(' '); 
		}
		val.pop_back();
		cout << val << '\n';	  
		tmp-=2;
	}
	
	tmp = 2;
	for(int i = n-1 ; i >=0 ; i--){
		string s(tmp, ' ');
		cout << s;
		string val;
		for(int j = 0 ; j <= i ; j++){
			val.push_back('0' + j);
			val.push_back(' ');
		}
		for(int j = i-1 ; j >= 0 ; j--){
			val.push_back('0' + j);
			val.push_back(' ');
		}	  
		val.pop_back();
		cout << val << '\n'; 
		tmp+=2;
	}
	
//	cout << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1; 
//	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
