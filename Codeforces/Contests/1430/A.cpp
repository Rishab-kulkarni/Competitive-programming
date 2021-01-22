#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	int t;
	cin >> t;
	while(t--){	
		int n;
		cin >> n;
		
		// 3*x + 5*y + 7*z == n
		
		if(n <= 2 || n == 4){
			cout << -1 << endl;
			continue;
		
		}
		
		if(n%3 == 0){
			cout << n/3 << ' ' << 0 << ' ' << 0 << endl;
		}
		
		else if(n%3 == 1){
			cout << (n - 7)/3 << ' ' << 0 << ' ' << 1 << endl;
		}
		
		else if(n%3 == 2){
			cout << (n-5)/3 << ' ' << 1 << ' ' << 0 << endl;
		}
	}
		
	
}
