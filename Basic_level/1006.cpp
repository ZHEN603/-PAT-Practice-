#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t;
    cin>>t;
    char data[2]={'B','S'};
    int index=3-t.size();
    for (int i = 0; i < t.size(); i++)
    {
        if (i!=t.size()-1)
        {
            for (int j = 0; j < t[i]-'0'; j++)
            {
                cout<<data[index];
            }
            index++;
        }
        else
        {
            for (int j = 1; j <= t[i]-'0'; j++)
            {
                cout<<j;
            }
        }
    }
}