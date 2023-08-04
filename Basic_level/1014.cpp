#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> s(4),week(7);
    week={ "MON", "TUE", "WED", "THU","FRI", "SAT", "SUN"};
    string day,hour,min;
    int flag=1;
    for (int i = 0; i < 4; i++)
    {
        cin>>s[i];
    }
    if (s[0].size()<s[1].size())
    {
        swap(s[0],s[1]);
    }
    for (int i = 0; i < s[1].size(); i++)
    {
        if (s[1][i]==s[0][i])
        {
            //第一对相同字符是求星期的，星期1-7对应着大写字母A-G，所以需要把for循环的遍历范围限制在A-G的范围内
            if (flag&&s[1][i]>='A'&&s[1][i]<='G')
            {
                day=week[s[1][i]-'A'];
                flag=0;
            }
            else if (flag==0)
            {
                if (s[1][i]>='0'&&s[1][i]<='9')
                {
                    hour=s[1][i];
                    hour="0"+hour;
                    break;
                }
                else if (s[1][i]>='A'&&s[1][i]<='N')
                {
                    hour=to_string(s[1][i]-'A'+10);
                    break;
                }
            }
        }
    }
    if (s[2].size()<s[3].size())
    {
        swap(s[2],s[3]);
    }
    for (int i = 0; i < s[3].size(); i++)
    {
        if (s[2][i]==s[3][i]&&((s[2][i]>='a'&&s[2][i]<='z')||(s[2][i]>='A'&&s[2][i]<='Z')))
        {
            if (i<10)
            {
                min="0"+to_string(i);
            }
            else
            {
                min=to_string(i);
            }
            break;
        }
    }
    cout<<day<<" "<<hour<<":"<<min;
}