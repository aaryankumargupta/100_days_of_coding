#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

long long cal(ll n , ll k)
{
    ll dist[n],rate[n],res[n];
    for(ll i=0;i<n;i++)
    {
        cin>>dist[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>rate[i];
        res[i] = (dist[i]*k + rate[i]);
    }
    return *min_element(res, res+n);
}

int main()
{
    long long t;
    cin>>t;
    ll n,k;
    long long resar[t];
    for(ll i=0;i<t;i++)
    {
        cin>>n>>k;
        resar[i] = cal(n, k);
    }
    for(ll i=0;i<t;i++)
    {
        cout<<resar[i]<<endl;
    }
    return 0;
}
