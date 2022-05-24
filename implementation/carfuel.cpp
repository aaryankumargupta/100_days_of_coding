#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int refuel(ll dist, ll distlim, ll *stops, ll n)
{
    int flag =0;
    long long cur(0),las;
    if(dist <= distlim)
        return flag;
    while(cur < n)
    {
       // cout<<"outer Itr"<<endl;
        if(stops[cur]+distlim >= dist)
            break;
        las = cur;
       // cout<<"new inner itr"<<endl;
        while(cur < n && stops[cur+1]-stops[las] <= distlim)
        {
            cur++;
           // cout<<cur<<endl;
        }
        if(cur == las)
        {
            flag = -1;
            break;
        }
        if(cur < n)
        {
            flag++;
        }
    }
    return flag;
}

int main()
{
    ll dist,distlim,n;
    cin>>dist>>distlim>>n;
    ll stops[n+2];
    stops[0] = 0;
    int flag(0);
    for(ll i=1;i<=n;i++)
    {
        cin>>stops[i];
    }
    stops[n+1] = dist;
    flag = refuel(dist, distlim, stops, n+2);
    cout<<flag;
    return 0;
}
