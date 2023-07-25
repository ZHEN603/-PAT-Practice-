#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string L1Head,L2Head,t,address;
    int n,cnt=1,L2index;
    cin>>L1Head>>L2Head>>n;
    map<string,pair<int,string>> data;
    vector<string> L2,L1,res;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cin>>data[t].first>>data[t].second;
    }
    address=L2Head;
    while (address!="-1")
    {
        L2.push_back(address);
        address=data[address].second;
    }
    address=L1Head;
    while (address!="-1")
    {
        L1.push_back(address);
        address=data[address].second;
    }
    if (L1.size()<L2.size())
    {
        swap(L1,L2);
    }
    L2index=L2.size()-1;
    for (int i = 0; i < L1.size(); i++)
    {
        res.push_back(L1[i]);
        if (i%2==1&&L2index>=0)
        {
            res.push_back(L2[L2index--]);
        }
    }
    for (int i = 0; i < res.size()-1; i++)
    {
        cout<<res[i]<<" "<<data[res[i]].first<<" "<<res[i+1]<<endl;
    }
    cout<<res.back()<<" "<<data[res.back()].first<<" -1"<<endl;
}