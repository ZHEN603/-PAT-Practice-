#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int n,max=0,min=100;
    string t,maxName,minName;
    map<string,pair<string,int>> data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cin>>data[t].first>>data[t].second;
        if (max<data[t].second)
        {
            max=data[t].second;
            maxName=t;
        }
        if (min>data[t].second)
        {
            min=data[t].second;
            minName=t;
        }
    }
    cout<<maxName<<" "<<data[maxName].first<<endl;
    cout<<minName<<" "<<data[minName].first<<endl;
}