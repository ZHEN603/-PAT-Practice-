#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c="0123456789JQK",t="";
    cin>>a>>b;
    int len=a.size()>b.size()?a.size():b.size();
    for (int i = 0; i < (a.size()>b.size()?a.size()-b.size():b.size()-a.size()); i++)
    {
        t+="0";
    }
    if (a.size()>b.size())
    {
        b=t+b;
    }
    else
    {
        a=t+a;
    }
    for (int i = 0; i < len ; i++)
    {
        int a_t=a[i]-'0',b_t=b[i]-'0';
        if ((len-i-1)%2)
        {
            if (int(b_t-a_t)<0)
            {
                cout<<c[b_t-a_t+10];
            }
            else
            {
                cout<<c[b_t-a_t];
            }
        }
        else
        {
            cout<<c[(b_t+a_t)%13];
        }
    }
}