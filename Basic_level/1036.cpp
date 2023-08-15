#include<iostream>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n>>c;
    for (int i = 0; i < n; i++)
    {
        cout<<c;
    }
    cout<<endl;
    for (int i = 0; i < int(n/2.0+0.5)-2; i++)
    {
        cout<<c;
        for (int j = 0; j < n-2; j++)
        {
            cout<<" ";
        }
        cout<<c<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<c;
    }
    cout<<endl;
}