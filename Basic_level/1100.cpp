#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int guest=0,student=0,n,m,cnt=0;
    string t,guestId,studentId;
    map<string,int> data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        data[t]++;
        if (i==0)
        {
            student=stoi(t.substr(6,8));
            studentId=t;
        }
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>t;
        if (i==0)
        {
            guest=stoi(t.substr(6,8));
            guestId=t;
        }
        if (data[t])
        {
            cnt++;
            if (stoi(t.substr(6,8))<student)
            {
                student=stoi(t.substr(6,8));
                studentId=t;
            }
        }
        else
        {
            if (stoi(t.substr(6,8))<guest)
            {
                guest=stoi(t.substr(6,8));
                guestId=t;
            }
        }
    }
    cout<<cnt<<endl;
    if (cnt)
    {
        cout<<studentId;
    }
    else
    {
        cout<<guestId;
    }
}