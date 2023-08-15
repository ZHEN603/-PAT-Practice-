#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < b.size(); i++)
    {
        if (a.find(b[i])!=string::npos)
        {
            a.erase(a.find(b[i]),1);
            b.erase(i,1);
            i--;
        }
    }
    if (b.size())
    {
        cout<<"No "<<b.size()<<endl;
    }
    else
    {
        cout<<"Yes "<<a.size()<<endl;
    }
}