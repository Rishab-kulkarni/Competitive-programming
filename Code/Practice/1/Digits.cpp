#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	int cnt = 0;
	while(true){
		int sum = 0;
		for(auto ch : s){
			sum += (ch - '0');
		} 
		if(sum >= 0 && sum <= 9 && s.length() == 1) break;
		else cnt++;
		s = to_string(sum);
	}	
	cout << cnt << '\n';
		
}
