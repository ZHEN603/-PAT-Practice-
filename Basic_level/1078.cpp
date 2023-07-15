#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t,res="",len="";
    int cnt=1;
    char mode;
    cin>>mode;
    cin.ignore();
    getline(cin,t);
    if (mode=='C')
    {
        for (int i = 0; i < t.size(); i++)
        {
            if (i+1!=t.size())
            {
                if (t[i+1]==t[i])
                {
                    cnt++;
                }
                else
                {
                    if (cnt>1)
                    {
                        res+=to_string(cnt)+t[i];                 
                    }
                    else
                    {
                        res+=t[i];
                    }
                    cnt=1;
                }
            }
            else
            {
                if (cnt>1)
                {
                    res+=to_string(cnt);
                }
                res+=t[i];
            }
        }        
    }    
    else if (mode=='D')
    {
        for (int i = 0; i < t.size(); i++)
        {            
            if (t[i]>='0'&&t[i]<='9')
            {
                len+=t[i];                
            }
            else
            {
                if (len=="")
                {
                    res+=t[i];
                }
                else
                {
                    for (int j = 0; j < stoi(len); j++)
                    {
                        res+=t[i];
                    }
                }                                          
                len="";
            }            
        }        
    }
    cout<<res<<endl;
}