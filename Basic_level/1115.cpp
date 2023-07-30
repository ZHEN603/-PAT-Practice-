#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> list,lose;
    int n,m,a,b,cnt;
    cin>>a>>b>>n>>m;
    int data[n][m];
    list[a]=list[b]=1;
    cnt=n;
    for (int i = 0; i < n; i++)
    {
        lose[i+1]=0;
        for (int j = 0; j < m; j++)
        {
            cin>>data[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (lose[j+1])
            {
                continue;
            }
            if (list.find(data[j][i])==list.end())
            {
                auto k=list.begin();
                for (k; k != list.end(); k++)
                {
                    if (list.find(k->first+data[j][i])!=list.end())
                    {
                        list[data[j][i]]++;
                        break;
                    }
                }
                if (k==list.end())
                {
                    cout<<"Round #"<<i+1<<": "<<j+1<<" is out."<<endl;
                    lose[j+1]++;
                    cnt--;
                }
            }
            else
            {
                cout<<"Round #"<<i+1<<": "<<j+1<<" is out."<<endl;
                lose[j+1]++;
                cnt--;
            }
        }
    }
    if (cnt)
    {
        cout<<"Winner(s):";
        for (int i = 0; i < n; i++)
        {
            if (lose[i+1]==0)
            {
                cout<<" "<<i+1;
            }
        }
    }
    else
    {
        cout<<"No winner."<<endl;
    }
}