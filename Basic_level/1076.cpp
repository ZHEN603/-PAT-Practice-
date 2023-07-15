#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t,password="";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>t;
            if (t[2]=='T')
            {
                password+=to_string(t[0]-'A'+1);
            }
        }
    }
    cout<<password<<endl;
}