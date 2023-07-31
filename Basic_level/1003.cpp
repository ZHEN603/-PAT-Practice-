#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string s;
    map<char,int> counter;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        counter.clear();
        int p=0,t=0;
        for (int j = 0; j < s.size(); j++)
        {
            counter[s[j]]++;
            p=(s[j]=='P'?j:p);
            t=(s[j]=='T'?j:t);
        }
        if (counter.size()==3&&counter['P']==1&&counter['T']==1&&counter['A']>=1&&t-p>1&&p*(t-p-1)==s.size()-1-t)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}