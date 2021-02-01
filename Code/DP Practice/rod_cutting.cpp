#include<bits/stdc++.h>
using namespace std;

int cut_rod(int p[], int n, int len){

    int dp[len + 1][n+1];
    memset(dp, -1, sizeof(dp));

    for(int i = 0 ; i <= len ; i++) dp[i][0] = 0;
    for(int i = 0 ; i <= n ; i++) dp[0][i] = 0;



    for(int i = 1 ; i <= len ; i++){
        for(int j = 1 ; j <= n ; j++){
            
            if(j >= i){
                dp[i][j] = max(dp[i-1][j], dp[i][j - i + 1] + p[i-1]);
            }

            else{
                dp[i][j] = dp[i-1][j];
            }

        }
    }

    return dp[len][n];

}



int main(){

    int p[] = {1,5,8,9,10,17,17,20};
    int len = sizeof(p)/sizeof(p[0]);
    int n = 8;

    cout << cut_rod(p , n, len) << endl;




}