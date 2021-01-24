#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout)
using namespace std;

typedef long long ll;
int main(){
	
	fastio();
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		
		int sum = accumulate(a.begin(), a.end(), 0);
		
		if(sum%2 == 0){
			int cnt_2 = count(a.begin(), a.end(), 2);
			int cnt_1 = count(a.begin(), a.end(), 1);
			if(cnt_2%2 !=0){
				if(cnt_1%2==0 && cnt_1!=0) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			
			else{
				if(cnt_1%2 == 0) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			
			
		}
		else{
			cout << "NO" << endl;
		}
		
			
	
	}
}
