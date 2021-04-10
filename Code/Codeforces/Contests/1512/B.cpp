
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){

	int n; cin >> n;
	vector<string> s(n);
	vector<pair<int,int>> coords;
	for(int i = 0 ; i < n ; i++){
		cin >> s[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(s[i][j] == '*'){
				coords.push_back({i,j});
			}
		}
	}	
	
	if(coords[0].first == coords[1].first) {
    	if(coords[0].first == 0){
			s[n-1][coords[0].second] = '*';
    		s[n-1][coords[1].second] = '*';	
    	}
    	else {
    		s[0][coords[0].second] = '*';
    		s[0][coords[1].second] = '*';
    	}
    }
    
    else if(coords[0].second == coords[1].second){
    	s[coords[0].first][(coords[0].second + 1)%n] = '*';
    	s[coords[1].first][(coords[0].second + 1)%n] = '*';
    }
    else {
    	s[coords[0].first][coords[1].second] = '*';
    	s[coords[1].first][coords[0].second] = '*';
    }
	
	for(int i = 0 ; i < n ; i++){
		cout << s[i] << '\n';
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
