#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string n,a,b;
    int carry=0;
    cin>>n>>a>>b;
    vector<int> sum;
    if (a.size()<b.size())
    {
        swap(a,b);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    reverse(n.begin(),n.end());
    for (int i = 0; i < a.size(); i++)
    {
        int t_a=a[i]-'0',t_b=0,t_n=10;
        if (i<b.size())
        {
            t_b=b[i]-'0';
        }
        if (i<n.size()&&i<20&&n[i]-'0'!=0)
        {
            t_n=n[i]-'0';
        }
        int res=t_a+t_b+carry;
        if (t_n<=res)
        {
            sum.push_back(res-t_n);
            carry=1;
        }
        else
        {
            sum.push_back(res);
            carry=0;
        }    
    }
    if (carry==1)
    {
        sum.push_back(carry);
    }
    int flag=1;
    for (int i = sum.size()-1; i >= 0; i--)
    {
        if (flag)
        {
            if (sum[i]==0&&i!=0)
            {
                continue;
            }
            else
            {
                flag=0;
            }
        }
        cout<<sum[i];
    }
}