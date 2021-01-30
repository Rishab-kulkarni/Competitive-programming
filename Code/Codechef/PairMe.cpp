#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a + b == c || a + c == b || b + c == a){
			cout << "YES" << endl;
		} 
		
		else cout << "NO" << endl;
	
	}
}
