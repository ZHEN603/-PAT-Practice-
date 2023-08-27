#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> data;
    int n,m,max=0;
    string t,res;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t>>m;
        t=t.substr(0,t.find("-"));
        data[t]+=m;
        if (data[t]>max)
        {
            max=data[t];
            res=t;
        }
    }
    cout<<res<<" "<<max;
}