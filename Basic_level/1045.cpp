#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max[n],min[n],data[n];
    for (int i = 0; i < n; i++)
    {
        cin>>data[i];
    }
    max[0]=data[0];
    min[n-1]=data[n-1];
    for (int i = 1; i < n; i++)
    {
        max[i]=max[i-1]<data[i]?data[i]:max[i-1];
        min[n-i-1]=min[n-i]>data[n-i-1]?data[n-i-1]:min[n-i];
    }
    set<int> res;
    for (int i = 0; i < n; i++)
    {
        if (max[i]==min[i])
        {
            res.insert(data[i]);
        }
    }
    cout<<res.size()<<endl;
    for (auto i = res.begin(); i != res.end(); i++)
    {
        cout<<(i==res.begin()?"":" ");
        cout<<*i;
    }
    cout<<endl;
}