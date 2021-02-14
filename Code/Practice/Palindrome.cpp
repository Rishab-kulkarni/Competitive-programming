#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	string s;
	
	bool ok = true;
	for(int i = 0 ; i < n ; i+= 2){
		if(ok) s += "ab";
		else s += "ba";
		ok = !ok;
	}
	
	if(n%2) s.pop_back();
	
	cout << s << endl;
	
}
