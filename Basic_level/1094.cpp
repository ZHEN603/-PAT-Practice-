#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool p(int x)
{
    if (x<4)
    {
        return x>1;
    }
    if (x%6!=1&&x%6!=5)
    {
        return false;
    }
    for (int i = 5; i < sqrt(x); i+=6)
    {
        if (x%i==0||x%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int l,k;
    string n;
    cin>>l>>k>>n;
    for (int i = 0; i <= l-k; i++)
    {
        if (p(stoi(n.substr(i,k))))
        {
            cout<<n.substr(i,k);
            return 0;
        }
    }
    cout<<404;
}