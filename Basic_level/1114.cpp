#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool isPrime(int n)
{
    if (n<4)
    {
        return n>1;
    }
    if (n%6!=5&&n%6!=1)
    {
        return false;
    }
    for (int i = 5; i < sqrt(n); i+=6)
    {
        if (n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s,t;
    int flag=1;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        t=s.substr(i,s.size()-i);
        cout<<t;
        if (isPrime(stoi(t)))
        {
            cout<<" Yes"<<endl;
        }
        else
        {
            cout<<" No"<<endl;
            flag=0;
        }
    }
    if (flag)
    {
        cout<<"All Prime!"<<endl;
    }
}