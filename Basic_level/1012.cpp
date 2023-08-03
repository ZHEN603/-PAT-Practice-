#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a1=0,a2=0,a3=0,a4=0,a5=0,n,t,k=1,flag2=0,cnt4=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        switch (t%5)
        {
            case 0:
                {
                    if (t%2==0)
                    {
                        a1+=t;
                    }
                    break;
                }
            case 1:
                {
                    a2+=(t*k);
                    k=-k;
                    flag2=1;
                    break;
                }
            case 2:
                {
                    a3++;
                    break;
                }
            case 3:
                {
                    a4+=t;
                    cnt4++;
                    break;
                }
            case 4:
                {
                    a5=(a5<t?t:a5);
                    break;
                }
            default:
                break;
        }
    }
    cout<<(a1==0?"N":to_string(a1))<<" "<<(flag2==0?"N":to_string(a2))<<" "<<(a3==0?"N":to_string(a3))<<" ";
    if (a4)
    {
        cout<<fixed<<setprecision(1)<<a4/double(cnt4);
    }
    else
    {
        cout<<"N";
    }
    cout<<" "<<(a5==0?"N":to_string(a5));
}