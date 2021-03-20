	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; cin >> n;
	set<int> s;
	for(int i = 0 ; i < n ; i++) {
		int elem; cin >> elem;
		if(elem !=0) s.insert(elem);
	}
	
	cout << s.size() << '\n';
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
