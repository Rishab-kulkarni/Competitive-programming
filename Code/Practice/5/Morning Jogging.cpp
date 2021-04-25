
// fuck off to the author

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	
	int n,m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	multiset<pair<int,pair<int,int>>> ms;

	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
			ms.insert(make_pair(a[i][j], make_pair(i,j)));
		}
	}
	
	while((int)ms.size() != m){
		ms.erase(prev(ms.end()));
	}
	
//	for(auto val : ms){
//		cout << val.first << " ---> " << val.second.first << ' ' << val.second.second << '\n';  
//	}
//	cout << endl;
	
	// how do i make sure that each of the runner gets one min path
	// take m smallest from n*m
	// figure out a way to assign, m smallest no's to each of the m column
	vector<vector<int>> ans(n, vector<int>(m, -1));
	
	// first greedily try to fill the first m positions
	int cnt = 0;
	for(auto val : ms){
		ans[val.second.first][cnt] = val.first;
		cnt++;
	}
	
	
	
    for(int i = 0; i < n; i++) {
    	multiset<int> nums, rem;
 		for (int j = 0; j < m; j++) {
            rem.insert(a[i][j]);
            if (ms.count({a[i][j], {i,j}}) > 0) {
                nums.insert(a[i][j]);
                ms.erase(ms.find({a[i][j], {i,j}}));
                rem.erase(rem.find(a[i][j]));
            }
        }
        
        for(int j = 0 ; j < m ; j++){
        	if(ans[i][j] == -1){
        		ans[i][j] = *rem.begin();
        		rem.erase(rem.find(ans[i][j]));
        	}
        
        }
    }    

	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {

	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while(t--){
    	solve();
	}
}
