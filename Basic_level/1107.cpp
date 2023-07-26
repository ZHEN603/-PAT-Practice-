#include<iostream>
using namespace std;
int main()
{
    int n,m,max=0,groupMax=0,t;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        groupMax=0;
        for (int j = 0; j < m; j++)
        {
            cin>>t;
            groupMax=groupMax<t?t:groupMax;
        }
        cout<<groupMax<<(i==n-1?"\n":" ");
        max=max<groupMax?groupMax:max;
    }
    cout<<max<<endl;
}