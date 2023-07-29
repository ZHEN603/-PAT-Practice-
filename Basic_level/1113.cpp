#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int toNum(char a)
{
    if (a>='a'&&a<='z')
    {
        return a-'a'+10;
    }
    return a-'0';
}
string toChar(int n)
{
    if (n>=10)
    {
        string t="";
        t+=(char)('a'+(n-10));
        return t;
    }
    return to_string(n);
}
int main()
{
    string a,b,t="";
    int carry=0,r;
    cin>>a>>b;
    if (a.size()<b.size())
    {
        swap(a,b);
    }
    while (b.size()!=a.size())
    {
        b="0"+b;
    }
    for (int i = a.size()-1; i >= 0; i--)
    {
        r=toNum(a[i])+toNum(b[i])+carry;
        carry=(r>=30?1:0);
        t+=toChar(r%30);
    }
    t+=(carry==1?"1":"");
    while (t[t.size()-1]=='0')
    {
        t.pop_back();
    }
    reverse(t.begin(),t.end());
    cout<<(t.size()==0?"0":t)<<endl;
}