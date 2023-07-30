#include<iostream>
using namespace std;
int main()
{
    int cnt=0,n;
    cin>>n;
    while (n!=1)
    {
        n=(n%2==1?(3*n+1):n)/2;
        cnt++;
    }
    cout<<cnt;
}