#include<bits/stdc++.h>
using namespace std;

int unbounded_knapsack(int wt[], int p[], int w, int n){

    int dp[n+1][w+1];
    memset(dp, - 1, sizeof(dp));

    for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
    for(int i = 0 ; i <=w ; i++) dp[0][i] = 0;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=w ; j++){
            if(j >= wt[i-1]){
                dp[i][j] = max(p[i-1] + dp[i][j - wt[i-1]], dp[i-1][j]);
            }

            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }


    return dp[n][w];



}




int main(){

    int wt[] = {5, 10, 15};
    int p[] = {10, 30, 20};
    int w = 100;
    int n = sizeof(p)/sizeof(p[0]);


    cout << unbounded_knapsack(wt, p , w, n) << endl;










}