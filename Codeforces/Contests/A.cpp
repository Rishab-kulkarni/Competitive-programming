#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int val = x, count = 0;
        int num;


        while(val > 0){
            num = val;
            val = val/10;
            count++;
        }
        
        int arr[36];
        for(int i = 0 ; i < 36 ; i++){
            arr[i] = i+1;
            if(arr[i] > 4 && arr[i]%4 == 0) arr[i] = arr[i]%4 + 4;
            if(arr[i] > 4) arr[i] = arr[i]%4;
            
             
        }


        // for(int i = 0 ; i < 36 ; i++) cout << arr[i] << ' ';
        
        int pos = 4*num - (4 - count);
        cout << accumulate(arr,arr + pos, 0) << endl;
	}

}
