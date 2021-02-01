#include<bits/stdc++.h>
using namespace std;


int min_val(int a[], int n , int sum){

    int dp[n+1][sum + 1];

    for(int i = 0 ; i<= sum ; i++) dp[0][i] = INT32_MAX - 1;
    for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;

    for(int i = 1 ; i <= sum ; i++){
        dp[1][i] = (i%a[0] == 0) ? i/a[0] : INT32_MAX - 1;
    }

    for(int i = 2 ; i <= n ; i++){
        for(int j = 1 ; j <= sum ; j++){
            if(j >= a[i-1]){
                dp[i][j] = min(1 + dp[i][j - a[i-1]], dp[i-1][j]);
            }

            else dp[i][j] = dp[i-1][j];
        }
    }


    return dp[n][sum];


}





int main(){

    int a[] = {1,2,3};
    int sum = 5;
    int n = sizeof(a)/sizeof(a[0]);

    cout << min_val(a, n , sum) << endl;

}