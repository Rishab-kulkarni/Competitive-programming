#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void naive_app(string x, string y){
        int n = x.length();
        int res = 0;

        for(int i = 0 ; i < n ; i++){
            string s2;
            for(int j = i ; j < n ; j++){
                s2+= x[j];
                
                if(y.find(s2) != -1){
                    res = max(res, (int)s2.length());
                }
            }
        }
        cout << res << endl;
    }


    // void substr_app(string x){
    //     int n = x.length();
        
    //     for(int i = 0 ; i < n ; i++){
    //         for(int j = 1 ; j <= n - i ; j++){
    //             cout << x.substr(i, j) << endl;
    //         }
    //     }

    // }


    void dp_app(string x, string y){
        int n = x.length(), m = y.length(), res = 0;
        int dp[n+1][m+1];

        for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
        for(int i = 0 ; i <= m ; i++) dp[0][i] = 0;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j <= m ; j++){
                if(x[i-1] == y[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    res = max(res, dp[i][j]);
                }

                else{
                    dp[i][j] = 0;
                }

            }
        }


        cout << res << endl;
    }
};


int main(){

    string x = "abcefg";
    string y = "abceg";
    Solution ob;
    ob.naive_app(x, y);
    ob.dp_app(x, y);
}

