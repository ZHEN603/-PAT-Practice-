#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool cmp(pair<string,pair<int,int>> a,pair<string,pair<int,int>> b)
{
    if (a.second.first==b.second.first)
    {
        if (a.second.second==b.second.second)
        {
            return a.first<b.first;
        }
        return a.second.second<b.second.second;
    }
    return a.second.first>b.second.first;
}
int main()
{
    int n,mark;
    string id,school;
    map<string,pair<double,int>> data;
    cin>>n;
    map<char,double> weight={
        {'B',0.6666666666666667},
        {'A',1},
        {'T',1.5}
    };
    for (int i = 0; i < n; i++)
    {
        cin>>id>>mark>>school;
        transform(school.begin(),school.end(),school.begin(),::tolower);
        data[school].first+=(mark*weight[id[0]]);
        data[school].second++;
    }
    vector<pair<string,pair<int,int>>> v(data.begin(),data.end());
    sort(v.begin(),v.end(),cmp);
    cout<<v.size()<<endl;
    int rank=1;
    for (int i = 0; i < v.size(); i++)
    {
        if (i>0&&v[i].second.first==v[i-1].second.first)
        {
            cout<<rank;
        }
        else
        {
            rank=i+1;
            cout<<rank;
        }
        cout<<" "<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
    }
}