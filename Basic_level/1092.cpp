#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if (a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    int n,m,t;
    cin>>n>>m;
    map<int,int> data;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>t;
            data[j]+=t;
        }
    }
    vector<pair<int,int>> v(data.begin(),data.end());
    sort(v.begin(),v.end(),cmp);
    cout<<v[0].second<<endl;
    cout<<v[0].first;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].second==v[0].second)
        {
            cout<<" "<<v[i].first;
        }
    }
}