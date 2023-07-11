#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    long long int m,n,TOL,y,x,num=-1,position[8][2]={
        {-1,-1},
        {-1,0},
        {-1,1},
        {0,-1},
        {0,1},
        {1,-1},
        {1,0},
        {1,1}
    };
    cin>>m>>n>>TOL;
    long long int data[n][m];
    map<long long int,int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>data[i][j];
            cnt[data[i][j]]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cnt[data[i][j]]==1)
            {
                int k=0;
                for ( ; k < 8; k++)
                {
                    if (i+position[k][0]>=0&&i+position[k][0]<n&&j+position[k][1]>=0&&j+position[k][1]<m)
                    {
                        if (abs(data[i][j]-data[i+position[k][0]][j+position[k][1]])<=TOL)
                        {
                            break;
                        }
                    }
                }
                if (k==8)
                {
                    if (num==-1)
                    {
                        num=data[i][j];
                        y=i;
                        x=j;
                    }
                    else
                    {
                        cout<<"Not Unique";
                        return 0;
                    }
                }
            }
        }
    }
    if (num==-1)
    {
        cout<<"Not Exist";
    }
    else
    {
        cout<<"("<<x+1<<", "<<y+1<<"): "<<num;
    }
}
