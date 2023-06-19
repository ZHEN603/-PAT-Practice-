#include<cmath>
#include <iomanip>
#include<iostream>
using namespace std;
int main(){
    double r1,p1,r2,p2,realPart,imaginaryPart;
    cin>>r1>>p1>>r2>>p2;
    realPart=r1*r2*(cos(p1)*cos(p2)-sin(p1)*sin(p2));
    imaginaryPart=r1*r2*(cos(p1)*sin(p2)+cos(p2)*sin(p1));
    cout<<fixed<<setprecision(2);
    //计算机对负数四舍五入后为0时会带上一个负号，所以负数四舍五入要单独拿出来讨论
    if (realPart<0&&realPart+0.005>=0){
        cout<<0.00;
    }else{
        cout<<realPart;
    }
    if (imaginaryPart>=0){
        cout<<"+"<<imaginaryPart<<"i";
    }else if (imaginaryPart<0&&imaginaryPart+0.005>=0){
        cout<<"+"<<0.00<<"i";
    }else{
        cout<<imaginaryPart<<"i";
    }
}