#include <bits/stdc++.h>
using namespace std;
void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int mid = l + r >> 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);
    int tmp[100];
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] < q[j]) tmp[k ++ ] = q[i ++ ];
        else tmp[k ++ ] = q[j ++ ];

    while (i <= mid) tmp[k ++ ] = q[i ++ ];
    while (j <= r) tmp[k ++ ] = q[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}
int main()
{
    int n;
    cout<<"please input the number of n:";
    cin>>n;
    int a[n];
    cout<<"please input each number:";
    for(int i=0;i<n;i++) cin>>a[i];
    merge_sort(a,0,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}