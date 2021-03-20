	
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n; string s;
	cin >> n >> s;
	set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
	vector<int> pos;
	for(int i = 0 ; i < n ; i++){
		if(vowels.find(s[i]) != vowels.end()) pos.push_back(i);
	}
	
	int val = pos.size();
	vector<bool> visited(n, true);
	for(int i = 0 ; i < val - 1; i++){
		if(abs(pos[i] - pos[i+1]) == 1){
			visited[pos[i+1]] = false;
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		if(visited[i]) cout << s[i];
	}
	cout << '\n';
	
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
