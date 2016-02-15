#include <stdio.h>
#include <math.h>
 int gcd( int a, int b)
{
    while(a!=b)
    { 
        
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}
int main()
{
    int t, a ,b;
    scanf("%d", &t);
    while(t)
    {
    	scanf("%d %d", &a, &b);
        if(a==0||b==0)
        break;
        int number=abs(a-b);
        int c=number/gcd(abs(a),abs(b));
        printf("%d\n", c);
    	t--;
	}
    return 0;
}





