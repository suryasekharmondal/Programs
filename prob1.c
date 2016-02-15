#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
 
int m;
char arr[1010] [1010];
 
void reset ()
{
    for ( int i = 0; i < 1010; i++ ) {
        for ( int j = 0; j < 1010; j++ )
            arr [i] [j] = '0';
    }
}
 
int call ( int x, int y )
{
    int min = 9999;
 
    for ( int i = 0; i < m; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            if ( arr [i] [j] == '3' ) {
                int temp = abs ( x - i ) + abs ( y - j );
                if ( temp < min )
                    min = temp;
            }
        }
    }
 
    return min;
}
 
 
int main ()
{
    int i;
    while ( cin >> m ) {
 
        reset ();
 
        for ( i = 0; i < m; i++ ) {
            for ( int j = 0; j < m; j++ ) 
                cin >> arr [i] [j];
        }
 
        int max = 0;
 
        for ( i = 0; i < m; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                if ( arr [i] [j] == '1' ) {
                    int min = call (i, j);
                    if ( min > max )
                        max = min;
                }
            }
        }
 
        cout << max << endl;
 
    }
    return 0;
}
