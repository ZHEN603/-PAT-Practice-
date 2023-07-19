#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n,cnt=0;
    string t;
    vector<string> data,v,vi;
    set<int> wrong;
    vector<int> w;
    vector<pair<int,int>> res;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        data.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (j!=i)
            {
                for (int x = 0; x < n; x++)
                {
                    if (x!=i&&x!=j)
                    {
                        v=data;
                        v[i][0]=v[i][0]=='+'?'-':'+';
                        v[x][0]=v[x][0]=='+'?'-':'+';
                        w.clear();
                        wrong.clear();
                        for (int k = 0; k < n; k++)
                        {
                            if (v[k][0]=='-')
                            {
                                wrong.insert(v[k][1]-'0');
                            }
                        }
                        w.assign(wrong.begin(),wrong.end());
                        if (w.size()==2&&((w[0]==i&&w[1]==j)||(w[0]==j&&w[1]==i)))
                        {
                            if ((w[0]==i&&w[1]==j)||(w[0]==j&&w[1]==i))
                            {
                                continue;
                            }
                            else if (w.size()==1&&(w[0]==i||w[0]==j||w[1]==i||w[1]==j))
                            {
                                res.push_back(make_pair(w[0],w[1]));
                            }
                        }
                    }
                    
                }
            }
            
            if (j!=i)
            {
                v=data;
                v[i][0]=v[i][0]=='+'?'-':'+';
                v[j][0]=v[j][0]=='+'?'-':'+';
                w.clear();
                wrong.clear();
                for (int k = 0; k < n; k++)
                {
                    if (v[k][0]=='-')
                    {
                        wrong.insert(v[k][1]-'0');
                    }
                }
                w.assign(wrong.begin(),wrong.end());
                if (w.size()<=2)
                {
                    if ((w[0]==i&&w[1]==j)||(w[0]==j&&w[1]==i))
                    {
                        continue;
                    }
                    else if (w[0]==i||w[0]==j||w[1]==i||w[1]==j)
                    {
                        res.push_back(make_pair(w[0],w[1]));
                    }
                }
            }
            
            v=data;
            v[i][0]=v[i][0]=='+'?'-':'+';
            v[j][0]=v[j][0]=='+'?'-':'+';
            w.clear();
            wrong.clear();
            for (int k = 0; k < n; k++)
            {
                if (v[k][0]=='-')
                {
                    wrong.insert(v[k][1]-'0');
                }
            }
            w.assign(wrong.begin(),wrong.end());
            if (w.size()<=2)
            {
                if ((w[0]==i&&w[1]==j)||(w[0]==j&&w[1]==i))
                {
                    continue;
                }
                else if (w[0]==i||w[0]==j||w[1]==i||w[1]==j)
                {
                    res.push_back(make_pair(w[0],w[1]));
                }
            }
        }
    }
}