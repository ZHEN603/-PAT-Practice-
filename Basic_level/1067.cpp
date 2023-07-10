#include<iostream>
#include<string>
using namespace std;
int main()
{
    string correct,t;
    int n,cnt=0;
    cin>>correct>>n;
    cin.ignore();
    while (true)
    {
        getline(cin,t);
        if (t=="#")
        {
            break;
        }
        else{
            if (t==correct)
            {
                cout<<"Welcome in"<<endl;
                break;
            }
            else
            {
                cout<<"Wrong password: "<<t<<endl;
                if (++cnt==n)
                {
                    cout<<"Account locked"<<endl;
                    break;
                }
            }
        }
    }
}
