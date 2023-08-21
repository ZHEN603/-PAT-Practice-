#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string sample="PATest",t;
    cin>>t;
    map<char,int> counter;
    for (int i = 0; i < t.size(); i++)
    {
        counter[t[i]]++;
    }
    while (sample.size())
    {
        for (auto i = sample.begin(); i != sample.end(); i++)
        {
            if (counter[*i]>0)
            {
                cout<<(*i);
                counter[*i]--;
            }
            else if (counter[*i]==0)
            {
                sample.erase(i);
                i--;
            }
        }
    }
}