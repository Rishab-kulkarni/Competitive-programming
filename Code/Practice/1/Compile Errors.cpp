#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, elem;
	cin >> n;
	
	ll sum1 = 0, sum2 = 0, sum3 = 0;
	
	for(int i = 0 ; i < n ; i++){
		cin >> elem;
		sum1 += elem;
	}	
	
	for(int i = 0 ; i < n -1; i++){
		cin >> elem;
		sum2 += elem;
	}
	
	for(int i = 0 ; i < n -2 ; i++){
		cin >> elem;
		sum3 += elem;
	}	

	
	int val1 = sum1 - sum2;
	int val2 = sum2 - sum3;
	cout << val1 << '\n' << val2 << '\n'; 
}
