#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> distance(n);
    for (int i = 0; i < n; i++)
    {
        cin >> distance[i];
    }
    sort(distance.begin(),distance.end());
    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        if (distance[n-i]>i)
        {
            cnt++;
        }
    }
    cout<<cnt;
}