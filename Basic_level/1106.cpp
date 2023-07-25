#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[4]={2,0,1,9},n,cnt=0;
    cin>>n;
    if (n<5)
    {
        string t="2019";
        cout<<t.substr(0,n);
        return 0;
    }
    cout<<2019;
    for (int i = 4; i < n; i++)
    {
        a[cnt]=(a[0]+a[1]+a[2]+a[3])%10;
        cout<<a[cnt];
        cnt=cnt==3?0:++cnt;
    }
}