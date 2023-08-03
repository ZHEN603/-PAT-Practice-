#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    if (n<4)
    {
        return n>1;
    }
    if (n%6!=1&&n%6!=5)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i+=6)
    {
        if (n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m,cnt=0,line=0;
    cin>>n>>m;
    for (int i = 2; ; i++)
    {
        if (isPrime(i))
        {
            cnt++;
            if (cnt>m)
            {
                break;
            }
            else if (cnt>=n)
            {
                line++;
                cout<<(line%10==1?"":" ")<<i<<(line%10==0?"\n":"");
            }
        }
    }
}