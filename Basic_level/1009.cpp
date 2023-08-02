#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t;
    int cnt=0;
    getline(cin,t);
    for (int i = t.size()-1; i >= 0; i--)
    {
        if (t[i]!=' ')
        {
            cnt++;
        }
        else
        {
            cout<<t.substr(i+1,cnt)<<" ";
            cnt=0;
        }
    }
    cout<<t.substr(0,cnt)<<endl;
}