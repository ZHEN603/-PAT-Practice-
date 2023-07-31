#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    int n,t,flag=0;
    map<int,int> counter;
    set<int> data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        data.insert(t);
        while (t!=1)
        {
            t=(t%2==1?(t*3+1)/2:t/2);
            counter[t]++;
        }
    }
    for (auto i = data.rbegin(); i != data.rend(); i++)
    {
        if (counter[*i]==0)
        {
            cout<<(flag==1?" ":"")<<*i;
            flag=1;
        }
    }
}