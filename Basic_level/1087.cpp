#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> data;
    for (int i = 1; i <= n; i++)
    {
        data.insert(i/2+i/3+i/5);
    }
    cout<<data.size()<<endl;
}