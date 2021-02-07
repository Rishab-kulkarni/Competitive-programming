#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1000000;

int convert(int hr, int min, string am_pm){

	if(am_pm == "PM"){
		if(hr!=12){
			hr += 12;
		}
		return (hr*mxN) + min;
	}
	
	
	else if(am_pm == "AM"){
		if(hr == 12){
			return min;
		}
		
		return hr*mxN + min;
	}
	
	return 0;
}




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){

		cin.ignore();
		string P, cord;
		cin >> P >> cord;
		
		int hr = stoi(string(P.begin(), P.begin() + 2));
		int min = stoi(string(P.begin() + 3, P.begin() + 6));
		int meet_conv = convert(hr, min, cord);				
		int n; cin >> n;

		string ans;
		cin.ignore();
		for(int i = 0 ; i < n ; i++){

			string start, am_pm_start, end , am_pm_end;
			
			cin >> start >> am_pm_start >> end >> am_pm_end;
			

			int hr_start = stoi(string(start.begin(), start.begin() + 2));
			int min_start = stoi(string(start.begin() + 3, start.begin() + 6));
			
			int hr_end = stoi(string(end.begin() , end.begin() + 2));
			int min_end = stoi(string(end.begin() + 3, end.begin() + 6));
			

			int start_conv = convert(hr_start , min_start , am_pm_start);
		    int end_conv = convert(hr_end, min_end, am_pm_end);
		    
		    
		    if(meet_conv >= start_conv && meet_conv <= end_conv) ans.push_back('1');
		    else ans.push_back('0');
		    
		}
		cout << ans << '\n';
	}
	return 0;
}
