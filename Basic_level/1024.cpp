#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t,d;
    int f,indexE,cnt=0,flag=0;
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
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i]!='+'&&d[i]!='.')
            {
                if (flag)
                {
                    if (cnt==f)
                    {
                        cout<<'.';
                    }
                    cnt++;
                }
                cout<<d[i];
            }
            else if (d[i]=='.')
            {
                flag=1;
            }
        }
        for (int i = cnt; i < f; i++)
        {
            cout<<0;
        }
    }
    else
    {
        cout<<(d[0]=='-'?"-0.":"0.");
        for (int i = 0; i < -f-1; i++)
        {
            cout<<0;
        }
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i]!='.'&&d[i]!='+'&&d[i]!='-')
            {
                cout<<d[i];
            }
        }
    }
}