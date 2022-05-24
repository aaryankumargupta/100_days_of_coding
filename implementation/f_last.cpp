#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int get_pisano(ll n, ll m)
{
    int count(0);
    int pre(0),cur(1),temp;
    for(int i=2;i<=m*m;i++)
    {
        temp = pre;
        pre = cur;
        cur = (pre+temp)%m;
        if(pre ==0 && cur == 1)
        {
            return count+1;
        }
        else
            count++;
    }
}

ll fibonacci(ll n, ll m)
{
    int p_no = get_pisano(n,m);
    int remainder = n%p_no;
    long long pre(0),cur(1),temp;
    if(remainder == 0)
    {
        return 0;
    }
    for(int i=2;i<=remainder;i++)
    {
        temp = pre;
        pre = cur;
        cur = (pre+temp)%m;
    }
    return cur%m;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    long long res = fibonacci(n,m);
    cout<<res<<endl;
    return 0;
}
