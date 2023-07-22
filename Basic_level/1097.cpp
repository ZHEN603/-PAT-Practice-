#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,x,m=1;
    cin>>n>>k>>x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int t;
        if (i%2==0)
        {
            for (int j = m; j < n; j++)
            {
                cin>>t;
                a[j]+=t;
            }
            for (int j = 0; j < m; j++)
            {
                cin>>t;
                a[j]+=x;
            }
            m++;
            if (m>k)
            {
                m=1;
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cin>>t;
                a[j]+=t;
            }
        }
    }
    cout<<a[0];
    for (int i = 1; i < n; i++)
    {
        cout<<" "<<a[i];
    }
}