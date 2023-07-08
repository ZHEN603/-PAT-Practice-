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
    int i=1;
    for ( ; i <= n; i++)
    {
        if (distance[n-i]<=i)
        {
            break;
        }
    }
    //为什么cout<<i-1;不放在break上，因为当每天路程都大于i时触发不了if (distance[n-i]<=i)中的代码段
    cout<<i-1;
}