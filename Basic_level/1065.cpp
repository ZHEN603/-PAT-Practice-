#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<map>
using namespace std;
int main(){
    int n,m,t1,t2,cnt=0;
    map<int,int> data,attend;
    vector<int> list,single;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t1>>t2;
        data[t1]=t2;
        data[t2]=t1;
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>t1;
        attend[t1]=1;
        list.push_back(t1);
    }
    for (int i = 0; i < m; i++)
    {
        if (attend[data[list[i]]]!=1)
        {
            single.push_back(list[i]);
        }
    }
    cout<<single.size()<<endl;
    sort(single.begin(),single.end());
    for (int i = 0; i < single.size(); i++)
    {
        cout<<setw(5)<<setfill('0')<<single[i];
        if (i!=single.size()-1)
        {
            cout<<" ";
        }
    }
}