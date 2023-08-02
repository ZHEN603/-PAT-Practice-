#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    m=m%n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin>>data[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<(i==0?"":" ")<<data[(n-m+i)%n];
    }
}