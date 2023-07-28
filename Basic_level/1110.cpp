#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string begin,tNode,tNext;
    int n,k,t,cnt=0;
    cin>>begin>>n>>k;
    map<string,int> data;
    map<string,string> next;
    vector<vector<string>> L;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin>>tNode>>t>>tNext;
        if (tNext.size()==5||tNext=="-1")
        {
            data[tNode]=t;
            next[tNode]=tNext;
        }
    }
    while (begin!="-1")
    {
        v.push_back(begin);
        begin=next[begin];
        cnt++;
        if (cnt==k)
        {
            L.push_back(v);
            v.clear();
            cnt=0;
        }
    }
    if (cnt>0)
    {
        L.push_back(v);
    }
    reverse(L.begin(),L.end());
    if (L.size()>0)
    {
        cout<<L[0][0]<<" "<<data[L[0][0]]<<" ";
    }
    for (int i = 0; i < L.size(); i++)
    {
        for (int j = 0; j < L[i].size(); j++)
        {
            if (i==0&&j==0)
            {
                continue;
            }
            cout<<L[i][j]<<endl;
            cout<<L[i][j]<<" "<<data[L[i][j]]<<" ";
        }
    }
    cout<<"-1";
}