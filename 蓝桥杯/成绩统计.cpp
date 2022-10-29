#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int score[n]={0};
    int a=0,b=0;
    for(int i=0;i<n;i++) 
    {
        cin>>score[i];
        if(score[i]>=60 && score[i]<85) a++;
        else if(score[i]>=85) b++;
    }
    double a1=a/(n*1.0);
    double b1=b/(n*1.0);
    cout<<round(a1*100)<<'%'<<endl;
    cout<<round(b1*100)<<'%'<<endl;
}
