#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<int,int> data;
    string t;
    int flag=1;
    for (int i = 0; i < 10; i++)
    {
        cin>>data[i];
        if (i!=0&&flag&&data[i]>0)
        {
            t=to_string(i);
            data[i]--;
            flag=0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < data[i]; j++)
        {
            t+=to_string(i);
        }
    }
    cout<<t<<endl;
}