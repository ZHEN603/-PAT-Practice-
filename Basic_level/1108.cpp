#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string t,example="String";
    int cnt=0,index=0,counter[example.size()]={0};
    cin>>t;
    for (int i = 0; i < t.size(); i++)
    {
        if (example.find(t[i])!=-1)
        {
            counter[example.find(t[i])]++;
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < example.size(); j++)
        {
            if (index==example.size())
            {
                index=0;
            }
            if (counter[index]>0)
            {
                break;
            }
            else
            {
                index++;
            }
        }
        counter[index]--;
        cout<<example[index++];
    }
}