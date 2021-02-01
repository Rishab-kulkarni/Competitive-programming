
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        
        if(n==1){
            cout<<a[0]<<endl;
        }

        else{
        
            int first=a[n-1],count=0;
            int second=a[n-2];
            for(int i=n-2;i>=0;i--){
                if(!first||!second){
                    if(!second){
                        second=a[i];
                    }
                    else first=a[i];
                }
            
                if(!first||!second)continue;
                int mi=min(first,second);
                count+=mi;
                first=first-mi;
                second=second-mi;
            }
            
            count+=max(first,second);
            cout<<count<<endl;
            count=0;
        }
    }

    return 0;
}