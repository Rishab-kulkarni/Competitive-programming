#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n,x;
        
        cin >> n >> x;
        if(n==1 || n==2){
            //floor = 1;
            cout << 1 << endl;
        }

        else{
            //3 - x+2
            //x+3 - 2x+2
            int floor = 1;
            int val1 = 3;
            int val2 = x+2;
            while(1){
                if(n >=val1 && n <=val2){
                    cout << floor+1 << endl;
                    break;
                }
                else{
                    val1+=x;
                    val2+=x;
                    floor++;
                }
                
            }
        }
    }
}
