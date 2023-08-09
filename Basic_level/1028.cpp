#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n,cnt=0,flag=1;
    string name,date,oldest,youngest,oldestAge,youngestAge;
    vector<pair<string,string>> data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>name>>date;
        if (name.size()<=5&&date>="1814/09/06"&&date<="2014/09/06")
        {
            cnt++;
            if (flag)
            {
                oldest=name;
                youngest=name;
                oldestAge=date;
                youngestAge=date;
                flag=0;
            }
            else
            {
                if (date<oldestAge)
                {
                    oldest=name;
                    oldestAge=date;
                }
                if (date>youngestAge)
                {
                    youngest=name;
                    youngestAge=date;
                }
            }
        }
    }
    if (cnt)
    {
        cout<<cnt<<" "<<oldest<<" "<<youngest<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}