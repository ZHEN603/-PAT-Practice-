#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string t;
    char c;
    map<char,int> broken;
    getline(cin,t);
    for (int i = 0; i < t.size(); i++)
    { 
        broken[t[i]]=1;
    }
    getline(cin,t);
    for (int i = 0; i < t.size(); i++)
    {
        if (!broken[toupper(t[i])])
        {
            if (broken['+']&&t[i]>='A'&&t[i]<='Z')
            {
                continue;
            }
            cout<<t[i];
        }
    } 
}