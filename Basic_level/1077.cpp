#include<iostream>
using namespace std;
int main()
{
    int n,m,teacher,sum,t,cnt,max,min;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        cnt=0;
        cin>>t;
        teacher=t;
        max=0;
        min=50;
        for (int j = 0; j < n-1; j++)
        {
            cin>>t;
            if (t>=0&&t<=m)
            {
                sum+=t;
                cnt++;
                if (t>max)
                {
                    max=t;
                }
                if (t<min)
                {
                    min=t;
                }
            }    
        }
        cout<<int(((sum-max-min)/double(cnt-2)+teacher)/2.0+0.5)<<endl;
    }
}