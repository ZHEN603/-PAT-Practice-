#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<vector<string>> alphabat(26,vector<string>(7));
    vector<string> res;
    string sentence,ans="";
    int flag=0,line=0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin>>alphabat[i][j];
        }
    }
    cin.ignore();
    getline(cin,sentence);
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i]<='Z'&&sentence[i]>='A')
        {
            ans+=sentence[i];
            flag=1;
        }
        else
        {
            if (flag)
            {
                res.push_back(ans);
                ans="";
            }
            flag=0;
        }
    }
    if (ans!="")
    {
        res.push_back(ans);
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (i!=0)
        {
            cout<<endl;
            cout<<endl;
        }
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < res[i].size(); k++)
            {
                cout<<(k!=0?" ":"")<<alphabat[res[i][k]-'A'][j];
            }
            if (j!=6)
            {
                cout<<endl;
            }
        }
    }
}