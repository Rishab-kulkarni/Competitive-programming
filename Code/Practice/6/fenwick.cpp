
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> fenwick;
int n;
void add(int idx, int elem){
	
	idx++;
	while(idx < n){
		fenwick[idx] += elem;
		idx += (idx & -idx);
	}
}

int sum(int idx){
	idx++;
	int res = 0;
	while(idx > 0){
		res += fenwick[idx];
		idx -= (idx & -idx);
	}
	return res;
}


int sum_range(int l,int r){
	return sum(r) - sum(l-1);
}


void solve() {
	
	cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	
	fenwick.resize(n+1 , 0);
	
	for(int i = 0 ; i < n ; i++){
		add(i, a[i]);
	}	
	
	int first = 0, second = 5;
	cout << sum_range(first, second) << '\n';
	cout << accumulate(a.begin() + first, a.begin() + second, 0) << '\n';

//	cout << '\n';	
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
