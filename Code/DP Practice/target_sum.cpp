#include<bits/stdc++.h>
using namespace std;

int target_sum(int a[], int n, int sum){

    int dp[n+1][sum + 1];

    for(int i = 0 ; i <= sum ; i++) dp[0][i] = 0;
    for(int i = 0 ; i <=n ; i++) dp[i][0] = 1;

    for(int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j <=sum ; j++){

            if(j >= a[i-1]) dp[i][j] = dp[i-1][j - a[i-1]] + dp[i-1][j];
            else dp[i][j] = dp[i-1][j];


        }
    }


    return dp[n][sum];
}



int main(){

    int a[] = {1,1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int t_sum = 1;

    int sum = accumulate(a, a+n, 0);

    cout << target_sum(a,n, (sum + t_sum)/2);



}