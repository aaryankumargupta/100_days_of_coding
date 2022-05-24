#include <bits/stdc++.h>

using namespace std;

int binary(int a[], int b, int l, int r)
{
    if(l <= r)
    {
        int m = l + (r-l)/2;
        if(a[m] == b)
            return m;
        else if(a[m] < b)
        {
            return binary(a,b,m+1,r);
        }
        else
            return binary(a,b,l,m-1);
    }
    else
        return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    vector<int> b;
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<k;i++)
    {
        cout<<binary(a, b[i], 0, n)<<' ';
    }
    return 0;
}
