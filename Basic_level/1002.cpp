#include<iostream>
#include<string>
using namespace std;
int main()
{
    string cn[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"
    };
    string t;
    int sum=0;
    cin>>t;
    for (int i = 0; i < t.size(); i++)
    {
        sum+=(t[i]-'0');
    }
    t="";
    while (sum)
    do{
        t=cn[sum%10]+" "+t;
    }while(sum/=10);
    t.pop_back();
    cout<<t<<endl;
}