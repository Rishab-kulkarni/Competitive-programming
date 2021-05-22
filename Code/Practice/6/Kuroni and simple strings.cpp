
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	string s; cin >> s;
	int n = s.size();
	
	int i = 0, j = n-1;
	vector<int> idx1, idx2; 
	
	while(i < j){
		while(i < n && s[i] == ')') i++;
		while(j >= 0 && s[j] == '(') j--;
		
		if(i < n && j >= 0 && i < j){
			idx1.push_back(i+1);
			idx2.push_back(j+1);
			i++;
			j--;
		}
	}
	
	if(idx1.empty() || idx2.empty()){
		cout << 0 << '\n';
		return;
	}
	
	cout << 1 << '\n';
	cout << idx1.size()  + idx2.size() << '\n';
	for(auto val : idx1) cout << val << ' ';
	sort(idx2.begin(), idx2.end());
	for(auto val : idx2) cout << val << ' ';
	cout << '\n'; 
}

int main() {
 
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}
}
