#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    string a,b,t="";
    int k,n1,n2,m1,m2;
    cin>>a>>b>>k;
    stringstream ss;
    ss<<a.substr(0,a.find('/'))<<" "<<a.substr(a.find('/')+1,a.size()-a.find('/')-1)<<" "<<b.substr(0,b.find('/'))<<" "<<b.substr(b.find('/')+1,b.size()-b.find('/')-1);;
    ss>>n1>>m1>>n2>>m2;
    if (n1*m2>n2*m1)
    {
        swap(n1,n2);
        swap(m1,m2);
    }
    for (int i = 1; i < k; i++)
    {
        int flag=1;
        for (int j = 2; j <= i; j++)
        {
            if (i%j==0&&k%j==0)
            {
                flag=0;
                break;
            }       
        }
        if (flag)
        {
            if (k*n1<m1*i&&k*n2>m2*i)
            {
                t+=(to_string(i)+"/"+to_string(k)+" ");
            }
        }
    }
    t.pop_back();
    cout<<t<<endl;
}