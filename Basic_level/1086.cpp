#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string t=to_string(a*b);
    reverse(t.begin(),t.end());
    cout<<stoi(t)<<endl;
}