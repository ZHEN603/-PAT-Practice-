#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string t;
    map<char,int> cnt;
    for (int i = 0; i < 2; i++)
    {
        getline(cin,t);
        for (int j = 0; j < t.size(); j++)
        {
            if (cnt[t[j]]==0)
            {
                cout<<t[j];
            }
            cnt[t[j]]++;
        }
    }
}