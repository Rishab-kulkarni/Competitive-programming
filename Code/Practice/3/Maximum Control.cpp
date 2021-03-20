	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int N;
	cin >> N;
	
	map<int, int> mp;
	for(int i = 0 ; i < N -1; i++){
		int elem1, elem2; cin >> elem1 >> elem2;	
		mp[elem1]++;
		mp[elem2]++;
	}
	
	int cnt = 0;
	// My first tree problem yayy!!
	for(auto it = mp.begin() ; it != mp.end() ; it++){
		if((*it).second == 1) cnt++;
	}
	cout << cnt << '\n';
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
