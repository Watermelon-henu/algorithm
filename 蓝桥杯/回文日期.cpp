#include <bits/stdc++.h>
using namespace std;
// ȱ�������жϹ���
bool isHuiwen(string str)
{
    for(int i=0;i<str.length()/2;i++) 
    {
        if(str[i]!=str[str.length()-i-1]) return false;
    }
    return true;
}
bool isDuichen(string str)
{
    for(int i=0;i<str.length()/2;i++) 
    {
        if(str[i]!=str[str.length()/2+i]) return false;
    }
    return true;
}
int main()
{
    int n; cin>>n;
    int a=n+1;
    bool flag=false;
    while (true)
    {
        string huiwen=to_string(a);
        if(isHuiwen(huiwen)) 
        {
            if(flag==false) 
            {
                cout<<huiwen<<endl;
                flag=true;
            }
            string qian=huiwen.substr(0,4);
            if(isDuichen(qian))
            {
                string hou=huiwen.substr(4,4);
                if(isDuichen(hou))
                {
                    cout<<huiwen<<endl;
                    break;
                } 
            }
        }
        a++;
    }
    return 0;
}