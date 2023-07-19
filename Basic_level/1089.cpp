#include<iostream>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1),lie;
    map<int,int> m;
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = i+1; k <= n; k++)
        {
            m.clear();
            m[i]=1;
            m[k]=1;
            lie.clear();
            for (int j = 1; j <= n; j++)
            {
                if ((v[j]<0&&m[abs(v[j])]==0)||(v[j]>=0&&m[abs(v[j])]==1))
                {
                    lie.push_back(j);
                }
            }
            if (lie.size()==2)
            {
                if ((m[lie[0]]==1&&m[lie[1]]==0)||(m[lie[0]]==0&&m[lie[1]]==1))
                {
                    cout<<i<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No Solution"<<endl;
}