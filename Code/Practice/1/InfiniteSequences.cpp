#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;
	cin >> n;
	
	for(int i = 1 ; ; i++){
		if(n <= i){
			cout << n << endl;
			break;
		}
		n -= i;
	}
	
}
