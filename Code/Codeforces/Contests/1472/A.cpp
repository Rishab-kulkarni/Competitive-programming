#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define open() freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout)
using namespace std;

//void solve(){
//	
//	if(w%2 == 0 && h%2 == 0){
//			
//			int cnt = 0;
//			
//			do{
//				cnt+=2;
//				w /= 2;
//			}while(w%2 == 0 && w!=0);
//			if(w == 0) cnt+=2;
//			
//			cout << cnt << endl;					
//			do{
//				cnt+=2;
//				h /= 2;
//			}while(h%2 == 0 && h!=0);
//			
//			if(h == 0) cnt+= 2;
////			cout << cnt << endl;
//			cout << (cnt >= n ? "YES" : "NO") << endl;
//			
//			continue;
//		}
//		
//		if(w%2 == 0 && h%2!=0){
//			int cnt = 0;
//			
//			do{
//				cnt+=2;
//				w /= 2;
//			}while(w%2 == 0 && w!=0);
//			
//			
//			cout << cnt << endl;			
//			if(w == 0) cnt+= 2;			
//			cout << (cnt >= n ? "YES" : "NO") << endl;
//			continue;
//		
//		}
//		
//		if(w%2 != 0 && h%2==0){
//			int cnt =0;
//			
//			do{
//				cnt+=2;
//				h /= 2;
//			}while(h%2 == 0 && h!=0);
//			
//			
//			cout << cnt << endl;									
//			if(h == 0) cnt+= 2;			
//			cout << (cnt >= n ? "YES" : "NO") << endl;
//			continue;
//		}


//}



void shit(){

//	int val  = 12;
//	
//	int cnt = 1;
//	while(true){
//		
//		if(val%2 == 0){
//			val = val/2;
//			cnt *= 2;
//		}
//		
//		else break;
//	
//	}
//	
//	cout << cnt << endl;	
}



typedef long long ll;
int main(){
	
	
	fastio();
	
//	shit();
	int t;
	cin >> t;
	while(t--){
		ll w,h,n;
		cin >> w >> h >> n;
		
//		if(n == 1){
//			cout << "YES" << endl;
//			continue;
//		}
//		
//		if(w%2!=0 && h%2!=0){
//			cout << (n == 1 ? "YES" : "NO") << endl;
//			continue;
//		}
		
		
		int cnt1 = 1;
		if(w%2 == 0){
			while(true){
				
				if(w%2 == 0){
					w = w/2;
					cnt1 *= 2;
				}
				
				else break;
			}
		}
		
		int cnt2 = 1;
		if(h%2 == 0){
			while(true){
				
				if(h%2 == 0){
					h = h/2;
					cnt2 *= 2;
				}
				
				else break;
			
			}
		}
		
//		cout << "w = " << cnt1 << endl;
//		cout << "h = " << cnt2 << endl;
		cout << (cnt1*cnt2 >= n ? "YES" : "NO") << endl;		
				
	
	}
}
