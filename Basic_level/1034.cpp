#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
using namespace std;
string show(int numerator,int denominator)
{
    string res="";
    for (int i = abs(numerator); i >= 2; i--)
    {
        if (numerator%i==0&&denominator%i==0)
        {
            numerator/=i;
            denominator/=i;
            break;
        }
    }
    if (numerator*denominator<0)
    {
        res+="-";
    }
    numerator=abs(numerator);
    denominator=abs(denominator);
    if (numerator>=denominator)
    {
        res+=to_string(numerator/denominator);
        if (numerator%denominator)
        {
            res+=" ";
            res+=to_string(numerator%denominator);
            res+="/";
            res+=to_string(denominator);
        }
    }
    else
    {
        res+=to_string(numerator)+"/"+to_string(denominator);
    }
    if (res[0]=='-')
    {
        res+=")";
        res="("+res;
    }
    return res;
}
int main()
{
    string a,b,c;
    cin>>a>>b;
    int numeratorA=stoi(a.substr(0,a.find('/')+1)),denominatorA=stoi(a.substr(a.find('/')+1,a.size()-a.find('/'))),numeratorB=stoi(b.substr(0,b.find('/')+1)),denominatorB=stoi(b.substr(b.find('/')+1,b.size()-b.find('/')));
    cout<<show(numeratorA,denominatorA)<<" + "<<show(numeratorB,denominatorB)<<" = "<<show(numeratorA*denominatorB+numeratorB*denominatorA,denominatorA*denominatorB);
}