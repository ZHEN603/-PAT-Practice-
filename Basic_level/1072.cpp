#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int n,m,pNum=0,iNum=0,num;
    string name,id;
    map<string,int> ids;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>id;
        ids[id]++;
    }
    for (int i = 0; i < n; i++)
    {
        int flag=1;
        cin>>name>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>id;
            if (ids[id]>=1)
            {
                if (flag)
                {
                    cout<<name<<":";
                    flag=0;
                    pNum++;
                }
                cout<<" "<<id;
                iNum++;
            }
        }
        if (flag==0)
        {
            cout<<endl;
        }
    }
    cout<<pNum<<" "<<iNum<<endl;
}