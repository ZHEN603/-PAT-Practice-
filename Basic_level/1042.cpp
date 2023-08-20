#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<char,int> counter;
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if (tolower(s[i])>='a'&&tolower(s[i])<='z')
        {
            counter[tolower(s[i])]++;
        }
    }
    auto max=counter.begin();
    for (auto i = counter.begin(); i != counter.end(); i++)
    {
        if (i->second>max->second)
        {
            max=i;
        }
    }
    cout<<max->first<<" "<<max->second;
}