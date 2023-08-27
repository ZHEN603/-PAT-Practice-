#include<iostream>
using namespace std;
int main()
{
    int n,j,y,jia,yi,counter[2]={0};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>j>>jia>>y>>yi;
        if (j+y==jia)
        {
            if (j+y!=yi)
            {
                counter[1]++;
            }
        }
        else if (j+y==yi)
        {
            counter[0]++;
        }
    }
    cout<<counter[0]<<" "<<counter[1];
}