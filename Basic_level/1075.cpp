#include<iostream>
#include<map>
#include<iomanip>
#include<vector>
using namespace std;
struct node
{
    int data,next;
};
int main()
{
    int begin,n,k;
    map<int,node> list;
    vector<int> v[3];
    cin>>begin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        cin>>list[t].data>>list[t].next;
    }
    int P=begin;
    while (P!=-1)
    {
        if (list[P].data<0)
        {
            v[0].push_back(P);
            
        }
        else if (list[P].data<=k)
        {
            v[1].push_back(P);
        }
        else
        {
            v[2].push_back(P);
        }
        P=list[P].next;
    }
    int flag=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (flag)
            {
                cout<<setw(5)<<setfill('0')<<v[i][j];
                cout<<" "<<list[v[i][j]].data<<" ";
                flag=0;
            }
            else
            {
                cout<<setw(5)<<setfill('0')<<v[i][j]<<endl;
                cout<<setw(5)<<setfill('0')<<v[i][j];
                cout<<" "<<list[v[i][j]].data<<" ";
            }
        }
    }
    cout<<-1<<endl;
}