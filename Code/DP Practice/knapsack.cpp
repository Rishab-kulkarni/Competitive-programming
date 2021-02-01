#include<bits/stdc++.h>
using namespace std;

int t[10][1000];


int recursive_approach(int wt[], int p[], int W, int n){
    if(n == 0 || W == 0) return 0;

    if(wt[n-1] <=W){
        return max(p[n-1] + recursive_approach(wt,p,W - wt[n-1], n-1), recursive_approach(wt,p,W,n-1));
    }

    else{
        return recursive_approach(wt,p,W,n-1);
    }

}


int memoized_sol(int wt[], int p[], int W, int n){
    if(n == 0 || W == 0) return 0;
    if(t[n][W]!=-1) return t[n][W];

    if(wt[n-1] <=W){
        t[n][W] = max(p[n-1] + memoized_sol(wt,p,W - wt[n-1], n-1), memoized_sol(wt,p,W,n-1));
    }

    else{
        t[n][W] = memoized_sol(wt, p, W, n-1);
    }

    return t[n][W];
}

int bottomUp(int wt[], int p[], int W, int n){
    int table[n+1][W+1];

    for(int i = 0 ; i < n+1 ; i++){
        for(int j = 0 ; j < W+1 ; j++){
            if(i == 0 || j == 0) table[i][j] = 0;
            else{
                if(wt[i] <=j){
                    table[i][j] = max(p[i] + table[i - 1][j - wt[i]], table[i-1][j]); 
                }

                else{
                    table[i][j] = table[i-1][j];
                }
            }
        }
    }

    return table[n][W];
}



int main(){

    int wt[] = {10, 20, 30};
    int p[] = {60, 100, 120};
    int W = 50, n = 3;

    memset(t, -1, sizeof(t));

    cout << bottomUp(wt,p,W,n) << endl;
    cout << recursive_approach(wt,p,W,n) << endl;
    cout << memoized_sol(wt,p,W,n) << endl;



}



