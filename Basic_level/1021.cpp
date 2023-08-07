#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string n;
    cin>>n;
    map<char,int> data;
    for (int i = 0; i < n.size(); i++)
    {
        data[n[i]]++;
    }
    for (auto i = data.begin(); i != data.end(); i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
    
}