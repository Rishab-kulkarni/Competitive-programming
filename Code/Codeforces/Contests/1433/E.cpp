#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ans;
    ll fact = 1;

    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
    }

    cout << 2*(fact)/(n*n) << endl;
}
