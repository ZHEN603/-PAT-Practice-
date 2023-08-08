#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main()
{
    string t,d;
    int f,indexE,indexP,precision,cnt;
    cin>>t;
    indexE=t.find('E');
    f=stoi(t.substr(indexE+1,t.size()-indexE-1));
    d=t.substr(0,indexE);
    if (f==0)
    {
        cout<<1;
    }
    else if (f>0)
    {
        cnt=0;
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i]!='.'&&d[i]!='+')
            {
                cout<<d[i];
                cnt++;
            }
            if (cnt==f)
            {
                cout<<".";
            }
        }
        for (int i = cnt; i < f; i++)
        {
            if (d[i]!='.'&&d[i]!='+')
            {
                cout<<d[i];
                cnt++;
            }
            if (cnt==f)
            {
                cout<<".";
            }
        }
    }
    else
    {
        cnt=0;
        for (int i = 0; i < abs(f); i++)
        {
            cout<<0;
            cnt++;
            if (cnt==1)
            {
                cout<<".";
            }
        }
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i]!='.'&&d[i]!='+')
            {
                cout<<d[i];
                cnt++;
            }
            if (cnt==1)
            {
                cout<<".";
            }
        }
    }
}