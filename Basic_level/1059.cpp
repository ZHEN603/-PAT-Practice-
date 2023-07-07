#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
bool is_prime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); ++i)
        if(n%i == 0) return false;
    return true;
}
int main(){
    int n,k,t;
    cin>>n;
    map<int,int> list;
    cin>>t;
    list[t]=1;
    for (int i = 1; i < n; i++){
        cin>>t;
        if (is_prime(i+1)){
            list[t]=2;
        }else{
            list[t]=3;
        }
    }
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        cin>>t;
        //cout<<setw(4)<<setfill('0')向前补零
        cout << setw(4)<< setfill('0')<<t<<": ";
        if (list[t]==0){
            cout<<"Are you kidding?"<<endl;
        }else{
            if (list[t]==-1){
                cout<<"Checked"<<endl;
            }else if (list[t]==1){
                cout<<"Mystery Award"<<endl;
            }else if (list[t]==2){
                cout<<"Minion"<<endl;
            }else{
                cout<<"Chocolate"<<endl;
            }
            list[t]=-1;
        }
    }
}