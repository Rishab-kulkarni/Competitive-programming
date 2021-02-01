#include<bits/stdc++.h>
using namespace std;

int no_of_ways(int a[], int n, int sum){

    int dp[n+1][sum+1];
    memset(dp, -1, sizeof(dp));

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int i = 0 ; i <= n ; i++) dp[i][0] = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=sum ; j++){
            if(j >= a[i-1]){
                dp[i][j] = dp[i-1][j] + dp[i][j - a[i-1]];
            }

            else{
                dp[i][j] = dp[i-1][j];
            }

        }
    }

    return dp[n][sum];

}


int rec_method(int a[], int n , int sum){
    if(sum == 0) return 1;
    if(sum < 0) return 0;

    if(n <= 0 && sum>=0) return 0;

    return rec_method(a, n-1, sum) + rec_method(a, n, sum - a[n-1]);

}


// credits to gfg
int count_coins(int a[], int n, int sum){

    int dp[sum + 1];
    // memset(dp, 0 , sizeof(dp));

    dp[0] = 1;

    for(int i = 0 ; i <n;i++){
        for(int j = a[i] ; j <= sum; j++){
            dp[j] = dp[j] + dp[j - a[i]]; 
        }
    }

    return dp[sum];


}



int main(){

    int a[] = {2,3,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 10;

    cout << no_of_ways(a,n,sum) << endl;
    cout << rec_method(a, n , sum) << endl;
    cout << count_coins(a, n , sum) << endl;

}