#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s[2],t[2];
    char d[2];
    cin>>s[0]>>d[0]>>s[1]>>d[1];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i][j]==d[i])
            {
                t[i]+=d[i];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (t[i].size()==0)
        {
            t[i]="0";
        }
    }
    cout<<stoi(t[0])+stoi(t[1])<<endl;
}