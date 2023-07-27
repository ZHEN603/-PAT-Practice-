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
    vector<vector<string>> alphabat(26,vector<string>(7));
    string sentence,ans="";
    int flag=1;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin>>alphabat[i][j];
        }
    }
    cin>>sentence;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i]<='Z'&&sentence[i]>='A')
        {
            ans+=sentence[i];
            flag=1;
        }
        else
        {
            if (flag==0)
            {
                continue;
            }
            for (int j = 0; j < 7; j++)
            {
                for (int k = 0; k < ans.size(); k++)
                {
                    cout<<(k!=0?" ":"")<<alphabat[ans[k]-'A'][j];
                }
                cout<<endl;
            }
            ans="";
            flag=0;
            if (i!=sentence.size()-1)
            {
                cout<<endl;
            }
        }
    }
}