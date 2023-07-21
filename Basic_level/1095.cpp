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
    int n,m,type,mark;
    string t;
    map<string,int> data;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>t>>mark;
        data[t]=mark;
    }
    for (int i = 0; i < m; i++)
    {
        cin>>type;
        switch (type)
        {
        case 1:
        {
            char t1;
            cin>>t1;
            printf("Case %d: %d %c\n",i+1,type,t1);
            vector<pair<string,int>> v;
            for (auto i = data.begin(); i != data.end(); i++)
            {
                if (i->first[0]==t1)
                {
                    v.push_back(make_pair(i->first,i->second));
                }
            }
            if (v.size()==0)
            {
                printf("NA\n");
            }
            else
            {
                sort(v.begin(),v.end(),cmp);
                for (auto i = v.begin(); i != v.end(); i++)
                {
                    printf("%s %d\n",i->first.c_str(),i->second);
                }
            }
            break;
        }
        case 2:
        {
            int t2,sum=0,cnt=0;
            cin>>t2;      
            printf("Case %d: %d %d\n",i+1,type,t2);
            for (auto i = data.begin(); i != data.end(); i++)
            {
                if (stoi(i->first.substr(1,3))==t2)
                {
                    cnt++;
                    sum+=i->second;
                }
            }
            if (cnt==0)
            {
                printf("NA\n");
            }
            else
            {
                printf("%d %d\n",cnt,sum);
            }
            break;
        }
        case 3:
        {
            string t3;
            int cnt=0;
            cin>>t3;           
            printf("Case %d: %d %s\n",i+1,type,t3.c_str());
            map<string,int> count;
            for (auto i = data.begin(); i != data.end(); i++)
            {
                if (i->first.substr(4,6)==t3)
                {
                    count[i->first.substr(1,3)]++;
                }
            }
            if (count.size()==0)
            {
                printf("NA\n");
            }
            else
            {
                vector<pair<string,int>> v(count.begin(),count.end());
                sort(v.begin(),v.end(),cmp);
                for (auto i = v.begin(); i != v.end(); i++)
                {
                    printf("%s %d\n",i->first.c_str(),i->second);
                }
            }
            break;
        }   
        default:
            break;
        }
    }
}