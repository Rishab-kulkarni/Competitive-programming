#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		
		int odd = 0;
		int even = 0;
		for(int i = 0 ; i < n ; i++){
			a[i] & 1 ? odd++ : even++;
		}
		
		cout << min(odd, even) << endl;
		
	}
}
