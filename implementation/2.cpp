#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int i=0,n;
        char name[n];
        for(int j=0;j<n;j++)
        {
            cin>>name[j];
        }
        while(name[i] != '@')
        {
            cout<<name[i];
            i++;
        }
        i++;
        while(name[i] != '.')
        {
            cout<<name[i];
            i++;
        }
    }
    return 0;
}
