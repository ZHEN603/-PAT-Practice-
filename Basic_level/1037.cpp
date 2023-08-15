#include<iostream>
using namespace std;
int main()
{
    int Pg,Ps,Pk,Ag,As,Ak,P,A,res;
    scanf("%d.%d.%d %d.%d.%d",&Pg,&Ps,&Pk,&Ag,&As,&Ak);
    P=Pg*17*29+Ps*29+Pk;
    A=Ag*17*29+As*29+Ak;
    res=A-P;
    cout<<res/(17*29)<<"."<<abs(res%(17*29)/29)<<"."<<abs(res%29);
}