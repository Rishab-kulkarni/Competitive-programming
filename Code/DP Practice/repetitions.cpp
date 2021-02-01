#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    int cnt = 1, best = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i] == s[i+1]) cnt++;
        else{
            best = max(best, cnt);
            cnt = 1;
        }
    }

    cout << best << endl;



}