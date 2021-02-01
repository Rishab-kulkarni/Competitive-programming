#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin >> n >> k;
    string s, val;
    cin >> s;
    val = s;
    reverse(val.begin(), val.end());

    if(s == val){
        k--;
        string ans = s;
        
        if(n == 1){
            while(k--){
                ans+= s;
            }
        }

        else{
            while(k--){
                ans += string(s.begin() + 1 , s.end());
            }
        }
        cout << ans << endl;
    }

    else{
        string ans;
        while(k--){
            ans += string(s.begin(), s.end());
        }

        cout << ans << endl;
    }



}