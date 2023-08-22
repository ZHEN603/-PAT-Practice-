#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> toNum;
    map<int,string> toMars;
    toNum["jan"]=1;
    toNum["feb"]=2;
    toNum["mar"]=3;
    toNum["apr"]=4;
    toNum["may"]=5;
    toNum["jun"]=6;
    toNum["jly"]=7;
    toNum["aug"]=8;
    toNum["sep"]=9;
    toNum["oct"]=10;
    toNum["nov"]=11;
    toNum["dec"]=12;
    toNum["tret"]=0;
    toNum["tam"]=13;
    toNum["hel"]=26;
    toNum["maa"]=39;
    toNum["huh"]=52;
    toNum["tou"]=65;
    toNum["kes"]=78;
    toNum["hei"]=91;
    toNum["elo"]=104;
    toNum["syy"]=117;
    toNum["lok"]=130;
    toNum["mer"]=143;
    toNum["jou"]=156;
    toMars[1]="jan";
    toMars[2]="feb";
    toMars[3]="mar";
    toMars[4]="apr";
    toMars[5]="may";
    toMars[6]="jun";
    toMars[7]="jly";
    toMars[8]="aug";
    toMars[9]="sep";
    toMars[10]="oct";
    toMars[11]="nov";
    toMars[12]="dec";
    toMars[0]="tret";
    toMars[13]="tam";
    toMars[26]="hel";
    toMars[39]="maa";
    toMars[52]="huh";
    toMars[65]="tou";
    toMars[78]="kes";
    toMars[91]="hei";
    toMars[104]="elo";
    toMars[117]="syy";
    toMars[130]="lok";
    toMars[143]="mer";
    toMars[156]="jou";
    int n,num;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string t;
        getline(cin,t);
        if (t[0]>='0'&&t[0]<='9')
        {
            num=stoi(t);
            if (num>=13)
            {
                if (num%13)
                {
                    cout<<toMars[num-(num%13)]<<" "<<toMars[num%13]<<endl;
                }
                else
                {
                    cout<<toMars[num]<<endl;
                }
            }
            else
            {
                cout<<toMars[num]<<endl;
            }        
        }
        else
        {
            num=0;
            if (t.size()>4)
            {
                num+=toNum[t.substr(0,3)];
                num+=toNum[t.substr(4,7)];
            }
            else if (t.size()==4)
            {
                num=0;
            }
            else
            {
                num+=toNum[t];
            }
            cout<<num<<endl;
        }
    }
}