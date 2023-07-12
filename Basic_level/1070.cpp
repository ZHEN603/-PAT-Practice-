#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin>>data[i];

    }
    sort(data.begin(),data.end());
    double sum=data[0];
    for (int i = 1; i < n; i++)
    {
        sum/=2;
        sum+=(data[i]/2.0);
    }
    cout<<int(sum);
}