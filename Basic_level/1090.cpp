#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n,m,k;
    map<string,vector<string>> match;
    map<string,int> show;
    string a,b;
    vector<string> g;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        match[a].push_back(b);
        match[b].push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        show.clear();
        g.clear();
        cin>>k;
        for (int j = 0; j < k; j++)
        {
            cin>>a;
            show[a]=1;
            g.push_back(a);
        }
        int flag=0;
        for (int j = 0; j < k; j++)
        {
            for (int z = 0; z < match[g[j]].size(); z++)
            {
                if (show[match[g[j]][z]])
                {
                    cout<<"No"<<endl;
                    flag=1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag==0)
        {
            cout<<"Yes"<<endl;
        }
    }
}