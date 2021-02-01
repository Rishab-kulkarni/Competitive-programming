#include<bits/stdc++.h>
using namespace std;

int dp_lcs(string x, string y, int m, int n){

    int dp[m+1][n+1];
    memset(dp, -1 , sizeof(dp));

    for(int i = 0 ; i <= m ; i++) dp[i][0] = 0;
    for(int i = 0 ; i <= n ; i++) dp[0][i] = 1;

    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){

            if(x[i-1] == y[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }

            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }



        }
    }

    return dp[m][n];
}


int main(){

    string x = "aggtab";
    string y = "gxtxayb";
    int m = x.length();
    int n = y.length();

    cout <<  "lcs length : " << dp_lcs(x, y, m, n) << endl;
    cout << "sseq length : " << m + n - dp_lcs(x, y, n, n) << endl;


}