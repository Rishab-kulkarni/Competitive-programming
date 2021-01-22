#pragma GCC optimize("O2")
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve(vector<int> a, int n, int x){
	map<int, vector<int>> m;
	
	for(int i = 0 ; i < n ; ++i){
		m[a[i]].push_back(i+1);
	}
	
	sort(a.begin(), a.end());
	
	int i = 0, j = n -1;
	while(i < j){
		int sum = a[i] + a[j];
		if(sum > x){
			j--;
		}
		
		else if(sum < x){
			i++;
		}
		
		else{
			if(a[i] == a[j]){
				cout << m[a[i]][0] << ' ' << m[a[j]][1] << endl;
			}
			
			else cout << m[a[i]][0] << ' ' << m[a[j]][0] << endl;
			
			return; 
		}
	}
	
	cout << "IMPOSSIBLE" << endl;
 
}
 
 
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	clock_t start = clock();
	
	int n,x;
	cin >> n >> x;
	
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
//	unordered_map<int,int> m;
//	
//	for(int i = 0 ; i < n ; i++){
//		if(m.find(abs(x - a[i])) == m.end()){		// O(1)
////			m[a[i]] = i;
//			m.insert(make_pair(a[i], i));
//		}
//		
//		else{
//		
//			cout << m[abs(x - a[i])] + 1 << ' ' << i+1 << endl;
//			return 0;
//		}
//	}
	
	solve(a, n, x);
	
	
//	cout << double(clock() - start)/(double)CLOCKS_PER_SEC << endl;	
	
	
//	cout << "IMPOSSIBLE" << endl;	
	return 0;
}
