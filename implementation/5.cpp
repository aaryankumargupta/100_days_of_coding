#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int mem[127] = {0};
        set<char> result;
        string A;
        cin>>A;
        for(int j=0;j<A.length();j++)
        {
            mem[int(A[j])] = 1;
        }
        string B;
        cin>>B;
        int flag = 0;
        for(int l=0;l<B.length();l++)
        {
            if(mem[int(B[l])] == 1)
                continue;
            else
                result.insert(B[l]);
                flag = 1;
        }
        if(flag == 0)
        {
            cout<<-1;
        }
        else
        {
            for(auto it = result.begin(); it!= result.end();it++)
            {
                cout<<*it;
            }
        }
        cout<<endl;
    }
}
