#include<iostream>
#include<map>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b)
{
    if (a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    int n,m,wrong=0;
    cin>>n>>m;
    vector<vector<int>> profiles;
    map<string,int> corrects,wrongs;
    for (int i = 0; i < m; i++)
    {
        int t1,t2,t3;
        vector<int> t;
        cin>>t1>>t2>>t3;
        t.push_back(t1);
        t.push_back(t2);
        t.push_back(t3);
        profiles.push_back(t);
        for (int j = 0; j < t3; j++)
        {
            string t_char;
            cin>>t_char;
            corrects[to_string(i+1)+"-"+t_char]=n;
        }
    }
    cin.ignore();
    string answers;
    for (int i = 0; i < n; i++){
        getline(cin,answers);
        int start=0,index=0;
        double sum=0;
        string answer;
        for (; start < answers.size();){
            answer=answers.substr(start+1,(answers.find(')',start)-start-1));
            start=answers.find('(',start+1);
            int cnt_correct=0,flag=1;
            for (int j = 2; j < answer.size(); j++)
            {
                if (answer[j]!=' ')
                {
                    if (corrects[to_string(index+1)+"-"+answer[j]]>=1){
                        corrects[to_string(index+1)+"-"+answer[j]]--;
                        cnt_correct++;
                    }else{
                        flag=0;
                        wrongs[to_string(index+1)+"-"+answer[j]]++;
                    }
                }
            }
            if (flag)
            {
                if (cnt_correct==profiles[index][2])
                {
                    sum+=profiles[index][0];
                }
                else if (cnt_correct>0)
                {
                    sum+=(profiles[index][0]/2.0);
                }
            }
            index++;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    map<string,int>::iterator it;
    for (it=wrongs.begin(); it != wrongs.end(); it++)
    {
        corrects[it->first]=wrongs[it->first];
    }
	vector<pair<string,int>> v(corrects.begin(),corrects.end());
	sort(v.begin(),v.end(),cmp);
    if (v[0].second!=0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i].second<<" "<<v[i].first<<endl;
            if (i+1==v.size()||v[i+1].second!=v[0].second)
            {
                break;
            }
        }
    }
    else
    {
        cout<<"Too simple"<<endl;
    }
}