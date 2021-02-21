#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
vector<int> digits;
bool check(ll num){
	ll temp = num;
	digits.clear();
	while(temp > 0){
			digits.push_back(temp%10);
			temp /= 10;
	}
	
	for(int i = 0 ; i < (int) digits.size() ; i++){
		if(digits[i] != 0) if(num%digits[i] != 0) return false;
	}
	
	return true;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;	
	while(t--){
		cin >> n;
	
		// brute force	
		while(true){
			if(check(n)){
				cout << n << endl; break;
			}
			else n++;
		}		
	}		
}
