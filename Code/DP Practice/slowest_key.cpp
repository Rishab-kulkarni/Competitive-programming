#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> releaseTimes = {9,29,49,50};
    string keysPressed = "cbcd";


    int n = keysPressed.length();
    vector <int> val;
    
    
    for(int i = 0 ; i < n ; i++){
        if(i == 0) val.push_back(releaseTimes[0]);
        else val.push_back(releaseTimes[i] - releaseTimes[i-1]);
    }
            
            
    char ch, temp;
    int best = val[0], m;
    for(int i = 0 ; i < n; i++){
        m = val[i];
        temp = keysPressed[i];
        if(m >= best){
            best = m;
            ch = keysPressed[i];
            if(temp > ch){ ch = temp;}



        }
    }



    cout << ch << endl;    

    
}