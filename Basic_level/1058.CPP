#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(vector<int> a,vector<int> b){
    if (a[4]==b[4])
    {
        return a[3]<b[3];
    }
    return a[4]>b[4];
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> profile;
    vector<string> corrects;
    for (int i = 0; i < m; i++){
        vector<int> t(5,0);
        cin>>t[0]>>t[1]>>t[2];
        t[3]=i+1;
        profile.push_back(t);
        string str,str_t="";
        for (int j = 0; j < t[2]; j++){
            cin>>str;
            str_t+=(str+" ");
        }
        str_t.pop_back();
        corrects.push_back(str_t);
    }
    string answers;
    //getline函数从istream中读取一行数据，当遇到“\n”时结束返回。cin不会主动删除输入流内的换行符，这样换行符就被getline读取到，getline遇到换行符返回，因此程序不会等待用户输入。解决的办法是手动清除换行符，在cin>>后加上 cin.ignore();
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin,answers);
        int start=0,sum=0,num=0;
        string answer;
        for (; start < answers.size();){
            answer=answers.substr(start+1,(answers.find(')',start)-start-1));
            start=answers.find('(',start+1);
            string correct=to_string(profile[num][2])+" "+corrects[num];
            if (answer==correct){
                sum+=profile[num][0];
            }else{
                profile[num][4]++;
            }
            num++;
        }
        cout<<sum<<endl;
    }
    sort(profile.begin(),profile.end(),cmp);
    if (profile[0][4]==0){
        cout<<"Too simple";
    }else{
        cout<<profile[0][4]<<" "<<profile[0][3];
        for (int i=1; i < profile.size(); i++){
            if (profile[i][4]==profile[0][4]){
                cout<<" "<<profile[i][3];
            }else{  
                break;
            }
        }
    }
}