#include<iostream>
using namespace std;
int main()
{
    int N,T,t,begin=0,end=0,flag=1,max=0,no=1;
    cin>>N>>T;
    for (int i = 0; i < N; i++)
    {
        cin>>t;
        max=(max<t?t:max);
        if (flag)
        {
            if (t>T)
            {
                begin=i;
                end=i;
                flag=0;
            }
        }
        else
        {
            if (t>T)
            {
                end=i;
            }
            else
            {
                flag=1;
                cout<<"["<<begin<<", "<<end<<"]"<<endl;
                no=0;
            }
        }
    }
    if (flag==0)
    {
        cout<<"["<<begin<<", "<<end<<"]"<<endl;
        no=0;
    }
    if (no)
    {
        cout<<max;
    }
}