#include<cmath>
#include <iomanip>
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    long double t;
    long double res=0;
    for (int i = 0; i < num; i++)
    {
        cin>>t;
        res+=t*(num-i)*(i+1);
    }
    cout<<fixed<<setprecision(2)<<res;
}