#include<bits/stdc++.h>
using namespace std;

int dp[10][1000];


int knapsack(int wt[], int p[], int W, int n){
    if(n == 0 || W == 0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];

    if(wt[n-1] <=W){
        dp[n][W] = max(p[n-1] + knapsack(wt,p,W - wt[n-1], n-1), knapsack(wt,p,W,n-1));
    }

    else{
        dp[n][W] = knapsack(wt,p,W,n-1);
    }

    return dp[n][W];


}


int bottom_up_approach(int wt[], int p[] , int W, int n){

    // same as dp table only
    int t[n+1][W+1];
    
    for(int i = 0 ; i < n+1 ; i++){
        for(int j = 0 ; j < W + 1 ; j++){
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }

            else if(wt[i] <= j){
                t[i][j] = max(p[i] + t[i-1][j - wt[i]], t[i-1][j]);
            }

            else{
                t[i][j] = t[i-1][j];
            }

        }
    }

    // for(int i = 0 ; i < n+1 ; i++){
    //     for(int j = 0 ; j < W + 1 ; j++){
    //         cout << t[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    return t[n][W];

}



int main(){
    int n = 3;
    int wt[] = {10,20,30};
    int p[] = {60,100,120};
    int W = 50;

    memset(dp,-1,sizeof(dp));

    // cout << knapsack(wt,p,W,n) << endl;

    cout << bottom_up_approach(wt,p,W,n) << endl;


}