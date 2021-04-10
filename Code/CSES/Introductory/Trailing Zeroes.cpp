#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
 
    ll cnt = 0;
    ll i = 1;
    while(floor(n/pow(5,i))){
        cnt += floor(n/pow(5,i));
        i++;
    }
 
    cout << cnt << endl;
 
}
