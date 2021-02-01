#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

class Solution{
    public : 
    void bear_and_segment(){
        string s;
        cin >> s;
        int n = s.length();
        int cnt1 = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '1'){
                cnt1++;
            }
        }

        int cnt2 = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '1'){
                cnt2++;
            }
            if(cnt2 > 0 && s[i] == '0') break;
        }

        if(cnt1 == 0) cout << "NO" << endl;
        else{
            (cnt2 == cnt1) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
};






int main(){

    fastio();

    int t;
    cin >> t;
    Solution ob;
    while(t--){
        ob.bear_and_segment();
    }

}