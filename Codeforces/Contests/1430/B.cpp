#include<bits/stdc++.h>
using namespace std;
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
typedef long long ll;

int main(){

    #ifndef ONLINE_JUDGE
    open();
    #endif

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>a(n+1);
        for(int i = 0 ; i < n ; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        ll sum = *max_element(a.begin(), a.end());
        for(int i = 1 ; i < n && k>0; i++){
            sum+= a[i];
            k--;
        }

        cout << sum << endl;

    }
    
}
