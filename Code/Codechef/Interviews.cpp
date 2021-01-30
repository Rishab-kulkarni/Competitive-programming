#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0 ; i < n ; ++i) cin >> a[i];
		
//		int rejected = count(a.begin(), a.end(), [] {});
		int solved = 0;
		bool rejected = false;
		for(int i = 0 ; i < n ; i++){
			if(a[i] !=-1) solved++;
		}		
				
		if(solved < (n + 1)/2){
			rejected = true;
			cout << "Rejected" << endl;
			continue;
		} 
		
		bool slow = false;
		for(int i = 0 ; i < n ; i++){
			if(a[i] > k){
				slow = true;
				break;
			}
		}
		
		if(!rejected && slow){
			cout << "Too slow" << endl;
			continue;
		}
		
		bool bot = false;
		int cnt = 0;
		for(int i = 0 ; i < n ; i++){
			if(a[i]!=-1 && a[i] <= 1){
				cnt++;
			}
		}
		
		if(cnt == n) bot = true;
		
		if(!slow && !rejected && bot){
			cout << "Bot" << endl;
			continue;
		}
		
		cout << "Accepted" << endl; 
		
	}
}
