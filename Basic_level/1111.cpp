#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string tM,tD,tY,t,tr;
    int n;
    cin>>n;
    map<string,string> data={
        {"Jan","01"},
        {"Feb","02"},
        {"Mar","03"},
        {"Apr","04"},
        {"May","05"},
        {"Jun","06"},
        {"Jul","07"},
        {"Aug","08"},
        {"Sep","09"},
        {"Oct","10"},
        {"Nov","11"},
        {"Dec","12"},
    };
    for (int i = 0; i < n; i++)
    {
        cin>>tM>>tD>>tY;
        tD.pop_back();
        while (tY.size()<4)
        {
            tY="0"+tY;
        }
        if (tD.size()<2)
        {
            tD="0"+tD;
        }
        tY+=(data[tM]+tD);
        t=tY;
        reverse(t.begin(),t.end());
        cout<<(t==tY?"Y ":"N ");
        cout<<tY<<endl;
    }
}