#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_lucky(ll num, int d){
	while(num > 0){
		if(num%10 == d) return true;
		num /= 10;
	}
	return false;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int q,d;
		cin >> q >> d;
		vector<int> a(q);
		for(int i = 0 ; i < q ; i++) cin >> a[i];
		
		for(int i = 0 ; i < q ; i++){
			bool ok = false;
			if(a[i]%d == 0){
				cout << "YES" << endl;
				ok = true;
			}
			
			else{
				int num = a[i];
				while(num > 0){
					if(is_lucky(num, d)){
						cout << "YES" << endl;
						ok = true;
						break;
					}
					else num-=d;
				} 				
			}
			if(!ok) {
				cout << "NO" << endl;
			}
		}
	}	
}
