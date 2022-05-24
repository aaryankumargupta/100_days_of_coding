#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    while(s[i] != '@')
    {
        i++;
    }
    int j=i;
    while(s[j] != '.')
        j++;
    for(int k=0;k<i;k++)
        cout<<s[k];
    cout<<" ";
    for(int p=i+1;p<j;p++)
    {
        cout<<s[p];
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
