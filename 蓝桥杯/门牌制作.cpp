#include <bits/stdc++.h>
using namespace std;
int count_two(string str)
{
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='2') count++;
    }
    return count;
}
int main()
{
    int count=1;
    string a;
    for(int i=11;i<=2020;i++)
    {
        a=to_string(i);
        count+=count_two(a);
    }
    cout<<count<<endl;
    return 0;
}