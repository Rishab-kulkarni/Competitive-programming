
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 4;
vector<vector<int>> board(N, vector<int>(N,0));

bool is_safe(int row, int col){
	for(int i = 0 ; i < row ; ++i){
		if(board[i][col]) return false;
	}
	
	int x = row;
	int y = col;
	
	while(x >= 0 && y >= 0){
		if(board[x][y]) return false;
		x--;
		y--;
	}
	
	x = row;
	y = col;
	while(x >= 0 && y < N){
		if(board[x][y]) return false;
		x--;
		y++;
	}
	return true;
	
}



bool solve(int x, int y) {
	
	if(x >= N){
		return true;
	}
	
	for(int col = 0 ; col < N ; col++){
		if(is_safe(x,col)){
			board[x][col] = 1;
			
			if(solve(x+1,col)){
				return true;
			}
			board[x][col] = 0;
		}
	}
	return false;
}

int main() {
 
	 ios::sync_with_stdio(false);
	 cin.tie(NULL);
	
	
	if(solve(0,0)){
		for(auto val : board){
			for(auto val2 : val) cout << val2 << ' ';
			cout << '\n';
		}
//		cout << '\n';
	}
	
	
	
	
}
