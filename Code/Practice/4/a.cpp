
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	int k,n; cin >> n >> k;
	string s; cin >> s;
	
	int cnt = 0, start = -1, end = -1;
	for(int i = 0; i < n ; i++){
		if(s[i] == '*'){
			s[i] = 'x';
			cnt++;
			start = i;
			break;
		}
	}
	
	for(int i = n-1; i >=0 ; i--){
		if(s[i] == '*'){
			s[i] = 'x';
			cnt++;
			end = i;
			break;
		}
	}
	
	// if distance b/w two x's > k
	// iterate from first pos of x and at max possible distance of '*' from x replace '*' with x
	if(cnt == 1){
		cout << cnt << '\n'; return;
	}
	
	vector<int> star_pos;
	for(int i = from_start ; i <= from_end ; i++){
		if(s[i] == '*') star_pos.push_back(i);
	}
	
	int dist = 0;
	for(int i = start ; i <= end ; i++){
		for(int j = i ; j <= end ; j++){
			if(s[j] == '*' 
		}
	
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);	
	
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
