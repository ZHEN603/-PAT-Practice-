#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int vacancy=0,possible=0,n,d,k;
    double e,t;
    cin>>n>>e>>d;
    for (int i = 0; i < n; i++){
        int cnt=0;
        cin>>k;
        for (int j = 0; j < k; j++){
            cin>>t;
            if (t<e){
                cnt++;
            }           
        }
        if (cnt>k/2&&k>d){
            vacancy++;
        }else if (cnt>k/2){
            possible++;
        }
    }
    cout<<fixed<<setprecision(1)<<(double)possible/n*100<<"% "<<(double)vacancy/n*100<<"%";
}