#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,q;
    int b,r=0;
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++)
    {
        r=r*10+(a[i]-'0');
        if (r<b)
        {
            q+=(q.size()!=0?"0":"");
        }
        else
        {
            q+=to_string(r/b);
            r=(r%b);
        }
    }
    cout<<(q.size()==0?"0":q)<<" "<<r<<endl;
}