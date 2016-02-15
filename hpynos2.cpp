#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main() 
{
    ull n;
    ull ans=0,res=0;
    cin>>n;
    ull ct=0;
    while(ct!=1 || ans==1)
    {
        ull tmp=n;
        res=0;
        ct=0;
        while(tmp!=0)
        {
            res+=(tmp%10)*(tmp%10);
            tmp/=10;
            ct++;
        }
        ans++;
        n=res;
    }
    if(res==1)
        cout<<ans-1<<"\n";
    else
        cout<<-1<<"\n";
    return 0;
}
