#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
 
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
 
    ll cnt = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i+1] >= a[i]) ;
        else{
            cnt += a[i] - a[i+1];
            a[i+1] = a[i];
        }
    }
 
    cout << cnt << endl;
 
}
