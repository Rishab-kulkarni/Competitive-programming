
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	
	for(auto &x : a) cin >> x;
	int prev = -1;
	
	string s;
	
	int i = 0, j = n-1;

	while(i <= j){
		if(a[i] > prev && a[j] > prev){
			if(a[i] < a[j]){
				s += 'L';
				prev = a[i];
				i++;
			}
			else{
				s += 'R';
				prev = a[j];
				j--;
			}
		}
		
		else if(a[j] > prev){
			s += 'R';
			prev = a[j];
			j--;
		}
		
		else if(a[i] > prev){
			s += 'L';
			prev = a[i];
			i++;
		}
		
		else{
			break;
		}
	}
	
	cout << s.size() << '\n';
	cout << s << '\n';
	
	
	
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);

	 int t = 1;
//	 cin >> t;
	 while (t--){
	 	solve();
	 }
}
