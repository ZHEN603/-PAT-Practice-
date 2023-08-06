#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
using namespace std;
bool cmp(pair<double,double> a,pair<double,double> b)
{
    return a.second>b.second;
}
int main()
{
    int n,d;
    double sum=0,s,p;
    cin>>n>>d;
    vector<pair<double,double>> data;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        data.push_back(make_pair(s,0));
    }
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        data[i].second=p/data[i].first;
    }
    sort(data.begin(),data.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        sum+=(data[i].first>d?d*data[i].second:data[i].first*data[i].second);
        d-=data[i].first;
        if (d<=0)
        {
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
}