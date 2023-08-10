#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,weights[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},flag=1;
    string t;
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        int j=0,sum=0;
        for (j; j < 17; j++)
        {
            if (t[j]>='0'&&t[j]<='9')
            {
                sum+=((t[j]-'0')*weights[j]);
            }
            else
            {
                break;
            }
        }
        if (j<17||(j==17&&M[sum%11]!=t[17]))
        {
            cout<<t<<endl;
            flag=0;
        }
    }
    if (flag)
    {
        cout<<"All passed"<<endl;
    }
}