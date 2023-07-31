#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
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
    for (int i = 5; i < sqrt(n); i+=6)
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
    int n,cnt=0;
    cin>>n;
    for (int i = 2; i <= n-2; i++)
    {
        if (isPrime(i)&&isPrime(i+2))
        {
            cnt++;
        }
    }
    cout<<cnt;
}
