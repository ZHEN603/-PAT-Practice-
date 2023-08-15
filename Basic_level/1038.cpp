#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,t;
    map<int,int> counter;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        counter[t]++;
    }
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cout<<(i==0?"":" ")<<counter[t];
    }
}