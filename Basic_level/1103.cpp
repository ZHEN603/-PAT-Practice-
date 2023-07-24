#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,flag=1;
    cin>>m>>n;
    for (int i = m; i <= n; i++)
    {
        int minus=pow(i,3)-pow(i-1,3);
        int plus=int(sqrt(minus));
        if (minus%plus==0)
        {
            //0<m<n≤25000
            for (int j = 2; j <= plus; j++)
            {
                if (pow(j,2)+pow(j-1,2)==plus)
                {
                    cout<<i<<" "<<j<<endl;
                    flag=0;
                }
            }
        }
    }
    if (flag)
    {
        cout<<"No Solution";
    }
}
