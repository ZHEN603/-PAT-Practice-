#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int m,n,a,b,r,t;
    cin>>m>>n>>a>>b>>r;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //这道题用cin最后一个测试点会超时，scanf比cin快！
            //cin>>t;
            scanf("%d",&t);
            if (t>=a&&t<=b)
            {
                cout<<setw(3)<<setfill('0')<<r;
            }
            else
            {
                cout<<setw(3)<<setfill('0')<<t;
            }
            if (j!=n-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<endl;
            }
        }
        
    } 
}