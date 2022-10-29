#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[10];
    for(int i=0;i<10;i++) num[i]=2021;
    int n=1;
    string tmp;
    while (true)
    {
        tmp=to_string(n);
        for(int i=0;i<tmp.length();i++)
        {
            int index=int(tmp[i])-'0';
            if(num[index]==0) 
            {
                cout<<n-1<<endl;
                return 0;
            }
            else num[index]--;
        }
        n++;
    }
}