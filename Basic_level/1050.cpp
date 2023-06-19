#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int num,m,n;
    cin>>num;
    int elements[num];
    for (int i = 0; i < num; i++)
    {
        cin>>elements[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (elements[i]<elements[j])
            {
                int t=elements[i];
                elements[i]=elements[j];
                elements[j]=t;
            }
        }
    }
    for (int i = int(sqrt(num)); i >= 1; i--)
    {
        if (num%i==0)
        {
            m=num/i;
            n=i;
            break;
        }
    }
    int matrix[m][n]={-1},ori=1,x=0,y=0,ori1=n-1,ori2=m-1,ori3=0,ori4=1;
    for (int i = 0; i < num; i++)
    {
        matrix[x][y]=elements[i];
        switch (ori)
        {
            case 1:    
                if (y+1>ori1)
                {
                    ori1--;
                    ori=2;
                    x++;
                }else{
                    y++;
                }
                break;
            case 2:
                if (x+1>ori2)
                {
                    ori2--;
                    ori=3;
                    y--;
                }else{
                    x++;
                }
                break;
            case 3:
                if (y-1<ori3)
                {
                    ori3++;
                    ori=4;
                    x--;
                }else{
                    y--;
                }
                break;
            case 4:
                if (x-1<ori4)
                {
                    ori4++;
                    ori=1;
                    y++;
                }else{
                    x--;
                }
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j];
            if (j!=n-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}