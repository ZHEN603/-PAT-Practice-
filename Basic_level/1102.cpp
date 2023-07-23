#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,price,num,maxNum,maxSale;
    string id,maxNumId,maxSaleId;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>id>>price>>num;
        if (i==0)
        {
            maxNum=num;
            maxSale=num*price;
            maxNumId=id;
            maxSaleId=id;
        }
        if (num>maxNum)
        {
            maxNum=num;
            maxNumId=id;
        }
        if (num*price>maxSale)
        {
            maxSale=num*price;
            maxSaleId=id;
        }
    }
    cout<<maxNumId<<" "<<maxNum<<endl;
    cout<<maxSaleId<<" "<<maxSale<<endl;
}