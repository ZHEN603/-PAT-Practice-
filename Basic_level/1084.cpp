#include<iostream>
#include<string>
using namespace std;
int main()
{
    string d,t;
    int n,cnt=1;
    cin>>d>>n;
    d+=" ";
    for (int j = 1; j < n; j++)
    {
        t="";
        for (int i = 0; i < d.size()-1; i++)
        {
            if (d[i]==d[i+1])
            {
                cnt++;
            }
            else
            {
                t+=d[i]+to_string(cnt);
                cnt=1;
            }
        }
        d=t+" ";
    }
    d.pop_back();
    cout<<d<<endl;
}