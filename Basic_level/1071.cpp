#include<iostream>
using namespace std;
int main()
{
    int T,K,n1,n2,b,t;
    cin>>T>>K;
    for (int i = 0; i < K; i++)
    {
        if (T<=0)
        {
            cout<<"Game Over."<<endl;
            return 0;
        }
        
        cin>>n1>>b>>t>>n2;
        if (T<t)
        {
            cout<<"Not enough tokens.";
        }else
        {
            if ((n1<n2&&b==1)||(n1>n2&&b==0))
            {
                cout<<"Win "<<t<<"!";
                T+=t;
            }
            else
            {
                cout<<"Lose "<<t<<".";
                T-=t;
            }
            
            
        }
        cout<<"  Total = "<<T<<"."<<endl;
        
        
    }
    
}