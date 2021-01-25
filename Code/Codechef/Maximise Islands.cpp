// Original - https://www.codechef.com/viewsolution/41879870

#include <bits/stdc++.h>
#define ll long long
using namespace std ;

void solve () {
    ll n , m ;
    cin >> n >> m ;
    char a[n][m] ;
    int ewater = 0 ;
    int owater = 0 ;
    int eland = 0 ;
    int oland = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            cin >> a[i][j] ;
            if ( (i+j) % 2 == 0 )
            {
                (( a[i][j] == '*' ) ? eland++ : ewater++ ) ;
            }
            else
            {
                (( a[i][j] == '*' ) ? oland++ : owater++ ) ;
            }
        }
    }

    // cout << eland << " " << oland << " " << ewater << " " << owater << "\n" ;
    if ( (n*m)%2 == 0 )
    {
        cout << min ( oland+ewater , eland+owater ) << "\n" ;
    }
    else
    {
        cout << oland+ewater << "\n" ;
    }
}

int main (){
    int t;
    cin >> t ;
    while ( t-- ) solve() ;
    return 0 ;
}  
