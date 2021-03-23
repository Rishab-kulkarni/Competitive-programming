	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n), b(k);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < k ; i++) cin >> b[i];
	
	if(k == 1){
		int pos = find(a.begin(), a.end() , 0) - a.begin();
		a[pos] = b[0];
		cout << (is_sorted(a.begin(), a.end()) ? "No" : "Yes") << '\n';	
	}
	
	else{
		cout << "Yes\n";
	}
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
