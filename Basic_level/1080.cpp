#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b)
{
    if (a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    int p,m,n,mark;
    cin>>p>>m>>n;
    string id;
    map<string,int> mapP,mapM,mapN;
    for (int i = 0; i < p; i++)
    {
        cin>>id>>mark;
        if (mark>=200)
        {
            mapP[id]=mark;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin>>id>>mark;
        if (mapP.find(id)!=mapP.end())
        {
            mapM[id]=mark;
        }       
    }
    for (int i = 0; i < n; i++)
    {
        cin>>id>>mark;
        if (mapP.find(id)!=mapP.end())
        {
            mapN[id]=mark;
        }    
    }
    vector<pair<string,int>> v;
    map<string,int>::iterator it;
    for (it=mapP.begin();it!=mapP.end();it++)
    {
        if (mapM.find(it->first)!=mapM.end()&&mapN.find(it->first)!=mapN.end())
        {
            if (mapM[it->first]>mapN[it->first])
            {
                int total=int(0.4*mapM[it->first]+0.6*mapN[it->first]+0.5);
                if (total>=60)
                {
                    v.push_back(make_pair(it->first,total));
                }
            }
            else if (mapN.find(it->first)!=mapN.end())
            {
                if (mapN[it->first]>=60)
                {
                    v.push_back(make_pair(it->first,mapN[it->first]));
                }
            }
        }
        else if (mapN.find(it->first)!=mapN.end())
        {
            if (mapN[it->first]>=60)
            {
                v.push_back(make_pair(it->first,mapN[it->first]));
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<mapP[v[i].first]<<" ";
        if (mapM.find(v[i].first)!=mapM.end())
        {
            cout<<mapM[v[i].first]<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        cout<<mapN[v[i].first]<<" "<<v[i].second<<endl;
    }
}