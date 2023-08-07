#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,d,sum;
    cin>>a>>b>>d;
    sum=a+b;
    string t="";
    do{
        t=to_string(sum%d)+t;
        sum=sum/d;
    }while (sum!=0);
    cout<<t<<endl;
}