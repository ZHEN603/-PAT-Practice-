#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,t;
    cin>>n>>m;
    vector<int> marks(m),corrects(m);
    for (int i = 0; i < m; i++)
    {
        cin>>marks[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>corrects[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            cin>>t;
            if (t==corrects[j])
            {
                sum+=marks[j];
            }
        }
        cout<<sum<<endl;
    }
}