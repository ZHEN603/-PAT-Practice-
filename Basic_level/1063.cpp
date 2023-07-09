#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
     int n,r,u;
     double max=0;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
        cin>>r>>u;
        if (max<sqrt(r*r+u*u))
        {
            max=sqrt(r*r+u*u);
        }
     }
     cout<<fixed<<setprecision(2)<<max<<endl;
}