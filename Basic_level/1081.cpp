#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string t;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin,t);
        if (t.size()<6)
        {
            cout<<"Your password is tai duan le."<<endl;
        } 
        else
        {
            int number=0,letter=0;
            for (int j = 0; j < t.size(); j++)
            {
                if (t[j]>='0'&&t[j]<='9')
                {
                    number=1;
                }
                else if ((t[j]>='a'&&t[j]<='z')||(t[j]>='A'&&t[j]<='Z'))
                {
                    letter=1;
                }
                else if (t[j]!='.')
                {
                    cout<<"Your password is tai luan le."<<endl;
                    number=0;
                    letter=0;
                    break;
                }
            }
            if (number==1&&letter==0)
            {
                cout<<"Your password needs zi mu."<<endl;
            }
            else if (number==0&&letter==1)
            {
                cout<<"Your password needs shu zi."<<endl;
            }
            else if (number==1&&letter==1)
            {
                cout<<"Your password is wan mei."<<endl;
            }
        }
    }
}