#include<iostream>
using namespace std;
int main()
{
    int x,n,flag=1;
    while (scanf("%d %d",&x,&n)!=EOF)
    {
        if (x*n!=0)
        {
            cout<<(flag==1?"":" ")<<x*n<<" "<<n-1;
            flag=0;
        }
    }
    if (flag)
    {
        cout<<"0 0";
    }    
}