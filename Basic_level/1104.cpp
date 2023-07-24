#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int getSum(string t)
{
    int sum=0;
    for (int x = 0; x < t.size(); x++)
    {
        sum+=(t[x]-'0');
    }
    return sum;
}
bool isPrime(int n)
{
    if (n<4)
    {
        return n>1;
    }
    if (n%6!=1&&n%6!=5)
    {
        return false;
    }
    for (int i = 5; i < sqrt(n); i+=6)
    {
        if (n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if (a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first<b.first;
}
int main()
{
    int N,k,m;
    cin>>N;
    vector<pair<int,int>> res;
    for (int i = 0; i < N; i++)
    {
        cin>>k>>m;
        res.clear();
        cout<<"Case "<<i+1<<endl;
        if (k*9<m)
        {
            cout<<"No Solution"<<endl;
            continue;
        }
        //这里使用暴力法，只是要先分析，减少枚举的数据量，否则会超时的。 因为 m 与 n 的最大公约数是一个大于 2 的素数，所以 A 个位上不能是比 9 小的数，否则就是 n=m+1，m、n 的公约数为1；同理，十位上也要是 9，否则 n=m-9+1=m-8，m、m-8 的公约数不会是素数。
        for (int j = 99+pow(10,k-1); j < pow(10,k); j+=100)
        {
            if (getSum(to_string(j))==m)
            {
                int n=getSum(to_string(j+1));
                int max=0;
                for (int x = 3; x <= (n<m?n:m); x++)
                {
                    if (n%x==0&&m%x==0)
                    {
                        max=max<x?x:max;
                    }
                }
                if (isPrime(max))
                {
                    res.push_back(make_pair(n,j));
                }
            }
        }
        if (res.size()==0)
        {
            cout<<"No Solution"<<endl;
            continue;
        }
        sort(res.begin(),res.end(),cmp);
        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i].first<<" "<<res[i].second<<endl;
        }
    }
}