#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k,n;
    vector<int> v;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int flag=1;
        v.clear();
        cin>>n;
        for (int j = 1; j <= n; j++)
        {
            if (n%j==0)
            {
                v.push_back(j);
            }
        }
        if (v.size()<4)
        {
            cout<<"No"<<endl;
            continue;
        }
        for (int j = 0; j < v.size()-3; j++)
        {
            for (int x = j+1; x < v.size()-2; x++)
            {
                for (int y = x+1; y < v.size()-1; y++)
                {
                    for (int z = y+1; z < v.size(); z++)
                    {
                        //10可以被5整除，5可以整除10，注意整除的理解
                        if ((v[j]+v[x]+v[y]+v[z])%n==0)
                        {
                            flag=0;
                        }
                    }
                }
            }
        }
        if (flag)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}