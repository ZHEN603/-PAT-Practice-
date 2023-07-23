#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string a;
    int d;
    cin>>a>>d;
    cout<<fixed<<setprecision(2)<<stoi(a.substr(a.size()-d,d)+a.substr(0,a.size()-d))/double(stoi(a));
}