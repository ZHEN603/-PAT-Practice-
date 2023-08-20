#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,pair<string,int>> data;
    int n,t,pos;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s>>t>>pos;
        data[t]=make_pair(s,pos);
    }
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cout<<data[t].first<<" "<<data[t].second<<endl;
    }
}