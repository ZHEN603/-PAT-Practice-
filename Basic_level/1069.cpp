#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int m,n,s,point=0,flag=1;
    map<string,int> cnt;
    string t;
    cin>>m>>n>>s;
    for (int i = 1; i <= m; i++)
    {
        cin>>t;
        if (i>=s)
        {
            if (point%n==0)
            {
                if (cnt[t]<1)
                {
                    flag=0;
                    cnt[t]++;
                    cout<<t<<endl;
                }
                else{
                    point--;
                }
            }
            point++;
        }
    }
    if (flag)
    {
        cout<<"Keep going...";
    }
}