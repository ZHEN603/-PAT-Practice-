#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int n,p,max=0,j=0;
    cin>>n>>p; 
    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin>>data[i];
    }
    sort(data.begin(),data.end());
    for (int i = 0; i < n; i++)
    {
        for ( j ; j < n; j++)
        {
            if (data[i]*p<data[j])
            {
                break;
            }
        }
        max=(max<(j-i)?(j-i):max);
    }
    cout<<max;
}