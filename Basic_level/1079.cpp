#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int i=0;
    string sum,t;
    cin>>sum;
    for (; i < 10; i++)
    {
        t=sum;
        reverse(t.begin(),t.end());
        if (t==sum)
        {
            cout<<sum<<" is a palindromic number."<<endl;
            break;
        }
        else
        {
            string res="";
            cout<<sum<<" + "<<t<<" = ";
            int carry=0;
            for (int i = sum.size()-1; i >= 0; i--)
            {
                int cal=(sum[i]-'0')+(t[i]-'0')+carry;
                carry=cal>9?1:0;
                res+=to_string(cal%10);
            }
            if (carry)
            {
                res+=to_string(carry);
            }
            reverse(res.begin(),res.end());
            sum=res;
            cout<<sum<<endl;
        }
    }
    if (i==10)
    {
        cout<<"Not found in 10 iterations."<<endl;
    }
}