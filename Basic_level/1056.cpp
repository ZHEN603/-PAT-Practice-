#include<iostream>
using namespace std;
int main(){
    int n,t,sum=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        sum+=(t*10*(n-1));
        sum+=(t*(n-1));
    }
    cout<<sum;
}