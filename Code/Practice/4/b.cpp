
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve(){
	int n; cin >> n;
    vector<ll> a,b;

    for(int i = 0 ; i < n; i++){
        ll x; cin >> x;
        a.push_back(x);
    }
    
    for(int i = 0 ; i < n; i++){
        ll x; cin >> x;
        b.push_back(x);
    }

    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    vector<ll> val1;
    vector<ll> val2;
    
    for(int i=0;i<n;i++){
        val1.push_back(a[i]+b[i]);
    	
    }

    cout<< *max_element(val1.begin(),val1.end()) << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--){
    	solve();
	}
}

