#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(char a,char b)
{
    return a>b;
}
string set0(string n)
{
    while (n.size()<4)
    {
        n="0"+n;
    }
    return n;
}
int main()
{
    string n;
    int a,b;
    cin>>n;
    n=set0(n);
    do
    {
        
        sort(n.begin(),n.end(),cmp);
        cout<<n<<" - ";
        a=stoi(n);
        sort(n.begin(),n.end());
        cout<<n<<" = ";
        b=stoi(n);
        n=to_string(a-b);
        n=set0(n);
        cout<<n<<endl;   
    } while (n!="6174"&&n!="0000");
}