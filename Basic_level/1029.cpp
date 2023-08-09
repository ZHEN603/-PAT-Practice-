#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c="";
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++)
    {
        if (b.find(a[i])==string::npos&&c.find(toupper(a[i]))==string::npos)
        {
            c+=toupper(a[i]);
        }
    }
    cout<<c;
}