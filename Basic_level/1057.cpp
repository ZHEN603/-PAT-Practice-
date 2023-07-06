#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int sum=0,cnt0=0,cnt1=0;
    for (int i = 0; i < s.size(); i++){
        if (s[i]>='A'&&s[i]<='Z'){
            sum+=(s[i]-'A'+1);
        }else if (s[i]>='a'&&s[i]<='z'){
            sum+=(s[i]-'a'+1);
        }
    }
    while (sum>0){
        if (sum%2){
            cnt1++;
        }else{
            cnt0++;
        }
        sum=sum/2;
    }
    cout<<cnt0<<" "<<cnt1;
}