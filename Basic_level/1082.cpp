#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    string id;
    int n,x,y;
    cin>>n>>id>>x>>y;
    double max=sqrt(x*x+y*y),min=sqrt(x*x+y*y);
    string champion=id,noob=id;
    for (int i = 1; i < n; i++)
    {
        cin>>id>>x>>y;
        if (sqrt(x*x+y*y)>max)
        {
            max=sqrt(x*x+y*y);
            noob=id;
        }
        if (sqrt(x*x+y*y)<min)
        {
            min=sqrt(x*x+y*y);
            champion=id;
        }
    }
    cout<<champion<<" "<<noob<<endl;
}