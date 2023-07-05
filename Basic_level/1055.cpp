#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<string,int> p1,pair<string,int> p2){
    if (p1.second==p2.second)
    {
        return p1.first<p2.first;
    }
    
    return p1.second>p2.second;
}
int main(){
    int n,k,height,extra,numPerLine,index=0;
    string name;
    pair<string,int> p;
    vector<pair<string,int>> people;
    cin>>n>>k;
    extra=n%k;
    numPerLine=int(n/(double)k);
    for (int i = 0; i < n; i++)
    {
        cin>>name>>height;
        people.push_back(make_pair(name,height));
    }
    sort(people.begin(),people.end(),cmp);
    for (int i = 0; i < k; i++)
    {
        int flag=1;
        string t="";
        for (int j = 0; j < (i==0?numPerLine+n%k:numPerLine); j++)
        {
            if (flag==1)
            {
                t+=(people[index++].first+" ");
                flag=0;
            }else{
                t=people[index++].first+" "+t;
                flag=1;
            }
        }
        t.pop_back();
        cout<<t<<endl;    
    }
}