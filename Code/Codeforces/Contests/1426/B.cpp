#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout)
using namespace std;

typedef long long ll;
int main(){
	
	fastio();
// 	open();
		
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
//		if(m%2){
//			cout << "NO" << endl;
//			continue;
//		}
		
		bool ok = false;
//		int val = n;
		int a[2][2];
		for(int z = 1 ; z <= n ; z++){
			
			for(int i = 0 ; i < 2 ; i++){
				for(int j = 0 ; j < 2 ; j++){
					cin >> a[i][j];
				}
			}
			
			if(a[1][0] == a[0][1]) ok = true;
		}
		
		cout << (ok && m%2 == 0  ? "YES" : "NO") << endl;
				
				
	}
}
