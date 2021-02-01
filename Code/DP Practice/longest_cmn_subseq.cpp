#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int lcs(string x, string y, int m, int n){

    if(m == 0 || n == 0) return 0;


    if(x[m-1] == y[n-1]){
        return 1 + lcs(x, y , m-1, n-1);
    }

    else{
        return max( lcs(x, y , m-1, n), lcs(x, y, m, n-1));
    }

}


int mem_lcs(string x, string y, int m, int n){

    if(m == 0 || n == 0) dp[m][n] = 0;

    if(dp[m][n]!=-1) return dp[m][n];

    else{
        if(x[m-1] == y[n-1]) dp[m][n] = 1 + mem_lcs(x,y,m - 1, n -1); 
        else dp[m][n] = max( mem_lcs(x, y , m - 1, n) , mem_lcs(x, y , m, n-1));
    }

    return dp[m][n];
}


int dp_lcs(string x, string y, int m , int n){

    int t[100][100];

    for(int i = 0 ; i <= m ; i++) t[i][0] = 0;
    for(int i = 0 ; i <= n ; i++) t[0][i] = 0;


    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
            
            
            if(x[i-1] == y[j-1])
            t[i][j] = 1 + t[i-1][j-1];

            else t[i][j] = max(t[i-1][j] , t[i][j-1]);


        }
    }


    for(int i = 0 ; i <=m ; i++){
        for(int j = 0 ; j <=n ; j++){
            cout << t[i][j] << ' ';
        }

        cout << endl;
    }



    return t[m][n];


}





int main(){

    memset(dp, - 1, sizeof(dp));


    string y = "abcdaf";
    string x = "acbcf";
    int m = x.length();
    int n = y.length();
    // cout << lcs(x, y , m, n) << endl;
    // cout << mem_lcs(x, y , m , n) << endl;
    cout << dp_lcs(x, y, m , n) << endl;

    /* int a[3][3];

    memset(a, -1, sizeof(a));


    cout << sizeof(a) << endl;

    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
 */



}