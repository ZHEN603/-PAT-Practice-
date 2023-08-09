#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int difference=(c2-c1)/100.0+0.5;
    cout<<setw(2)<<setfill('0')<<difference/3600<<":"<<setw(2)<<setfill('0')<<(difference%3600)/60<<":"<<setw(2)<<setfill('0')<<difference%60<<endl;
}