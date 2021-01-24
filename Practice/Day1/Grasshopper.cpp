#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,k;
	cin >> n >> k;
	string s;
	
	cin >> s;
	int idx_g = find(s.begin(), s.end(), 'G') - s.begin();
	int idx_t = find(s.begin(), s.end(), 'T') - s.begin();
	
	if(idx_g > idx_t){
		swap(s[idx_t], s[idx_g]);
		swap(idx_t, idx_g);
	}
	
//	if(abs(idx_t - idx_g) == 1){
//		cout << (k == 1? "YES":"NO") << endl;
//		return 0;
//	} 
	
	
	for(int i = idx_g ; i <= idx_t ; i+=k){
		if(s[i] == '#'){
			cout << "NO" << endl;
			return 0;
		}
		else if(s[i] == 'T'){
			cout << "YES" << endl;
			return 0;
		}
	}
		
	cout << "NO" << endl;
	return 0;
}
