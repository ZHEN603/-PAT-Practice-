#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;
int main(){
    string t;
    int n,cnt=0;
    double sum=0,t_num;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        int j=t[0]=='-'?1:0,dot=0;
        for (; j < t.size(); j++)
        {
            
            if (t[j]=='.')
            {
                if(dot++){
                    break;
                }else if (j<t.size()-3)
                {
                    break;
                }
            }else if (t[j]<'0'||t[j]>'9')
            {
                break;
            }
        }
        if (j!=t.size())
        {
            cout<<"ERROR: "<<t<<" is not a legal number"<<endl;
        }else{
            stringstream ss;
            ss<<t;
            ss>>t_num;
            if (t_num>1000||t_num<-1000)
            {
                cout<<"ERROR: "<<t<<" is not a legal number"<<endl;
            }else{
                cnt++;
                sum+=t_num;
            }
        } 
    }
    cout<<fixed<<setprecision(2);
    if (cnt == 0) {
        cout<<"The average of 0 numbers is Undefined"<<endl;
    } else if (cnt == 1) {
        cout<<"The average of 1 number is "<<sum<<endl;
    } else {
        cout<<"The average of "<<cnt<<" numbers is "<<sum/cnt<<endl;
    }
}