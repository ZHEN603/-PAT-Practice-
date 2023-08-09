#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    map<string,pair<int,string>> data;
    vector<string> l,res;
    int n,k;
    string t,begin;
    cin>>begin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cin>>data[t].first>>data[t].second;
    }
    while (begin!="-1")
    {
        l.push_back(begin);
        begin=data[begin].second;
    }
    n=l.size();
    for (int i = k-1; i < n-(n%k); i+=k)
    {
        for (int j = 0; j < k; j++)
        {
            if (i-j==k-1)
            {
                cout<<l[k-1]<<" "<<data[l[k-1]].first<<" ";
                continue;
            }
            cout<<l[i-j]<<endl;
            cout<<l[i-j]<<" "<<data[l[i-j]].first<<" ";
        }
    }
    for (int i = n-(n%k); i < n; i++)
    {
        cout<<l[i]<<endl;
        cout<<l[i]<<" "<<data[l[i]].first<<" ";
    }
    cout<<"-1"<<endl;
}