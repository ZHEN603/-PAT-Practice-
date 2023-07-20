#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m,k;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>k;
        int j = 1;
        for (; j < 10; j++)
        {
            if (to_string(j*k*k).substr(to_string(j*k*k).size()-to_string(k).size(),to_string(k).size())==to_string(k))
            {
                cout<<j<<" "<<j*k*k<<endl;
                break;
            }
        }
        if (j==10)
        {
            cout<<"No"<<endl;
        }
    }
}