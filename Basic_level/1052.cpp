#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> signs[3];
    for (int i = 0; i < 3; i++){
        string text;
        getline(cin,text);
        int s=0;
        for (int j = 0; j < text.size(); j++){
            if (text[j]=='['){
                s=j;
            }
            if (text[j]==']'){
                signs[i].push_back(text.substr(s+1,j-s-1));
            }
        }
    }
    int k;
    cin>>k;
    for (int i = 0; i < k; i++){
        int n1,n2,n3,n4,n5;
        cin>>n1>>n2>>n3>>n4>>n5;
        if (n1>signs[0].size()||n2>signs[1].size()||n3>signs[2].size()||n4>signs[1].size()||n5>signs[0].size()||n1<1||n2<1||n3<1||n4<1||n5<1){
            cout<<"Are you kidding me? @\\/@"<<endl;
        }else{
            cout<<signs[0][n1-1]<<"("<<signs[1][n2-1]<<signs[2][n3-1]<<signs[1][n4-1]<<")"<<signs[0][n5-1]<<endl;
        }
    } 
}