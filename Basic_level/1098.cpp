#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> data(2,vector<int> (n));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>data[i][j];
        }
    }
    int top=*min_element(data[0].begin(),data[0].end()),bottom=*max_element(data[1].begin(),data[1].end());
    if (top-bottom>=1)
    {
        cout<<"Yes "<<top-bottom<<endl;
    }
    else
    {
        cout<<"No "<<1-(top-bottom)<<endl;
    }
}