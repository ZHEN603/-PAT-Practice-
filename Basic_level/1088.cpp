#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int m,data[3],i=10,flag=0;
    double x,y;
    cin>>m>>x>>y;
    for (; i < 100; i++)
    {
        string t=to_string(i);
        reverse(t.begin(),t.end());
        if (abs(stoi(t)-i)/x==stoi(t)/y)
        {
            flag=1;
            data[0]=i;
            data[1]=stoi(t);
            //丙要四舍五入
            data[2]=stoi(t)/y+0.5;
        }
    }
    if (flag)
    {
        cout<<data[0];
        for (int i = 0; i < 3; i++)
        {
            if (m>data[i])
            {
                cout<<" "<<"Gai";
            }
            else if (m==data[i])
            {
                cout<<" "<<"Ping";
            }
            else if (m<data[i])
            {
                cout<<" "<<"Cong";
            }
        }
    }
    else
    {
        cout<<"No Solution"<<endl;
    }
}