#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,id,mark,maxId=1,maxMark=0;
    map<int,int> data;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>id>>mark;
        data[id]+=mark;
    }
    for (auto i = data.begin(); i != data.end(); i++)
    {
        if (maxMark<(*i).second)
        {
            maxMark=(*i).second;
            maxId=(*i).first;
        }
    }
    cout<<maxId<<" "<<maxMark<<endl;
}