#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> nums;
    for (int i = 0; i < n; i++)
    {
        int sum=0,t;
        cin>>t;
        while (t>0)
        {
            sum+=(t%10);
            t/=10;
        }
        nums.insert(sum);
    }
    cout<<nums.size()<<endl;
    set<int>::iterator it;
    for (it =nums.begin(); it != nums.end(); it++)
    {
        cout<<*it;
        //迭代器移动 1.advance( ) 将迭代器往前或往后移动 n 个元素位置 2.next：移动n位置后返回一个新迭代器 3.prev：移动n位置后，返回n的前一个迭代器
        if (it!=prev(nums.end(),1))
        {
            cout<<" ";
        }
    }
}