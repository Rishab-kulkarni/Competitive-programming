#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x = rand()%100;
	cout << "x = " << x << '\n';
	for(int i = 31 ; i >= 0 ; i--){
		if(x & (1 << i)) cout << 1;
		else cout << 0;
	}
	cout << '\n';
}


int main(){
	srand(time(0));
	solve();
	

	int n = 5;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%5 + 1;
	}
	
	int targ = rand()%7 + 1;
	for(auto val : a) cout << val << ' '; 
	cout << '\n';
	cout << "Sum = " << targ <<'\n';
	// checking each subset sum O(n*2^n)
	for(int mask = 0 ; mask < (1 << n) ; mask++){
		int sum = 0;
		for(int i = 0 ; i < n ; i++){
			if(mask & (1 << i)) sum += a[i];
		}
		
		if(sum == targ){
			cout << "YES\n"; return 0;
		}
	}
	cout << "NO\n"; return 0;
}
