#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool cmp(pair<string,vector<int>> a,pair<string,vector<int>>b)
{
    if (a.second[2]==b.second[2])
    {
        if (a.second[0]==b.second[0])
        {
            return a.first<b.first;
        }
        return a.second[0]>b.second[0];
    }
    return a.second[2]>b.second[2];
}
int main()
{
    int n,l,h,cnt=0;
    string t;
    vector<vector<pair<string,vector<int>>>> data(4);
    cin>>n>>l>>h;
    for (int i = 0; i < n; i++)
    {
        vector<int> arr(3);
        cin>>t>>arr[0]>>arr[1];
        arr[2]=arr[0]+arr[1];
        if (arr[0]>=l&&arr[1]>=l)
        {
            if (arr[0]>=h&&arr[1]>=h)
            {
                data[0].push_back(make_pair(t,arr));
            }
            else if (arr[0]>=h&&arr[1]<h)
            {
                data[1].push_back(make_pair(t,arr));
            }
            else if (arr[0]<h&&arr[1]<h&&arr[0]>=arr[1])
            {
                data[2].push_back(make_pair(t,arr));
            }
            else
            {
                data[3].push_back(make_pair(t,arr));
            }
        }
    }
    cout<<data[0].size()+data[1].size()+data[2].size()+data[3].size()<<endl;
    for (int i = 0; i < 4; i++)
    {
        sort(data[i].begin(),data[i].end(),cmp);
        for (int j = 0; j < data[i].size(); j++)
        {
            cout<<data[i][j].first<<" "<<data[i][j].second[0]<<" "<<data[i][j].second[1]<<endl;
        }
    }
}