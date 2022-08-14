#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int q[100010];
    for(int i=0;i<n;i++) cin>>q[i];
    while(m--)
    {
        int x;cin>>x;
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=(l+r)>>1;
            if(q[mid]<x) l=mid+1;
            else r=mid;
        }
        if(q[l]!=x)cout<<"-1 -1"<<endl;
        else
        {
            cout<<l<<" ";
            int l=0,r=n-1;
            while(l<r)
            {
                int mid=(l+r+1)>>1;
                if(q[mid]>x) r=mid-1;
                else l=mid;
            }
            cout <<l<<endl;
        }
    }
    return 0; 
}