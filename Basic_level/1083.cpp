#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    map<int,int> data;
    for (int i = 1; i <= n; i++)
    {
        cin>>t;
        data[abs(t-i)]++;
    }
    //map反向遍历
    for (auto it = data.rbegin(); it != data.rend(); it++)
    {
        if (it->second>1)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}