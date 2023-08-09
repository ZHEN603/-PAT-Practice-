#include<iostream>
using namespace std;
int main()
{
    int cnt=1,i=1,n;
    char c;
    cin>>n>>c;
    while (cnt+((2*i+1)*2)<=n)
    {
        cnt+=((1+2*i)*2);
        i++;
    }
    i--;
    for (int j = i; j >= 0; j--)
    {
        for (int k = 0; k < i-j; k++)
        {
            cout<<" ";
        }
        for (int k = 0; k < j*2+1; k++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for (int j = 1; j <= i; j++)
    {
        for (int k = 0; k < i-j; k++)
        {
            cout<<" ";
        }
        for (int k = 0; k < j*2+1; k++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    cout<<n-cnt<<endl;
}