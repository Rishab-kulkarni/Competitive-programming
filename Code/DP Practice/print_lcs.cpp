#include<bits/stdc++.h>
using namespace std;

string dp_lcs(string x, string y, int m, int n){
    string s;

    int dp[m+1][n+1];
    memset(dp, -1, sizeof(dp));

    for(int i = 0 ; i <= m ; i++) dp[i][0] = 0;
    for(int i = 0 ; i <= n ; i++) dp[0][i] = 0;

    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(x[i-1] == y[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }

            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // actual code
    int i = m, j = n;

    while(i > 0 && j > 0){
        if(x[i-1] == y[j-1]){
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }

    reverse(s.begin(), s.end());
    return s;
}




int main(){


    string x = "abcdef";
    string y = "abfe";
    int m = x.length();
    int n = y.length(); 

    cout << dp_lcs(x, y, m, n) << endl;



}
