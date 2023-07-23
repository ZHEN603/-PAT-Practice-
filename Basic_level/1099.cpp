#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
using namespace std;
bool is_prime(int n)
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
    int n,t;
    cin>>n;
    t=n;
    if (is_prime(n))
    {
        if (is_prime(n-6))
        {
            cout<<"Yes"<<endl;
            cout<<n-6<<endl;
            return 0;
        }
        else if (is_prime(n+6))
        {
            cout<<"Yes"<<endl;
            cout<<n+6<<endl;
            return 0;
        }
    }
    while (true)
    {
        n++;
        if (is_prime(n)&&(is_prime(n-6)||is_prime(n+6)))
        {
                cout<<"No"<<endl;
                cout<<n<<endl;
                return 0;
        }
    }
}