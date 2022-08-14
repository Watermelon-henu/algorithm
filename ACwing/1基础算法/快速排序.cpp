#include <bits/stdc++.h>
using namespace std;
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[l];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
        else break;
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main()
{
    int n;
    cout<<"输入要排序的个数:";
    cin>>n;
    int a[n];
    cout<<"输入每个数:";
    for(int i=0;i<n;i++) cin>>a[i];
    quick_sort(a,0,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}