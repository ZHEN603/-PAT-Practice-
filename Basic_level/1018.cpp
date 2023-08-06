#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second>b.second;
}
int main()
{
    int n;
    char jia,yi;
    cin>>n;
    map<char,char> rule={
        {'C','J'},
        {'J','B'},
        {'B','C'}
    };
    vector<map<char,int>> win(2);
    vector<vector<int>> counter(2,vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin>>jia>>yi;
        if (jia==yi)
        {
            counter[0][1]++;
            counter[1][1]++;
        }
        else
        {
            if (rule[jia]==yi)
            {
                counter[0][0]++;
                counter[1][2]++;
                win[0][jia]++;
            }
            else
            {
                counter[0][2]++;
                counter[1][0]++;
                win[1][yi]++;
            }
        }
    }
    cout<<counter[0][0]<<" "<<counter[0][1]<<" "<<counter[0][2]<<endl;
    cout<<counter[1][0]<<" "<<counter[1][1]<<" "<<counter[1][2]<<endl;
    vector<pair<char,int>> v(win[0].begin(),win[0].end());
    sort(v.begin(),v.end(),cmp);
    cout<<(v.size()==0?'B':v[0].first)<<" ";
    vector<pair<char,int>> v1(win[1].begin(),win[1].end());
    sort(v1.begin(),v1.end(),cmp);
    cout<<(v1.size()==0?'B':v1[0].first)<<endl;
}