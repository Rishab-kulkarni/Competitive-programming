#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	
	for(int i = 0 ; i < n ; ++i) cin >> a[i];	
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		b[i] = a[i]/2 ;
		sum += b[i];
	}
	
	if(sum !=0){
		for(int i = 0 ; i < n ; i++){
			if(a[i] < 0 && (a[i] & 1) && sum > 0){
				b[i]--;
				sum--;
				if(sum == 0) break;
			}
			
			if(a[i] > 0 && (a[i] & 1) && sum < 0){
				b[i]++;
				sum++;
				if(sum == 0) break;
			}
		}
	}
	 
	for(auto val : b) cout << val << '\n';
	int sum2 = 0; 
	for(int i = 0 ; i < n ; i++) sum2+= b[i];
	cout << "Sum = " << sum2 << endl;

	
}
