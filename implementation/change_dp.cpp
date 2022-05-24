//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_change(int m)
{
    vector<int> coin = {1,3,4};
    vector<int> table(m+1, INT_MAX);
    table[0] = 0;
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i >= coin[j])
            {
                int temp = table[i - coin[j]] + 1;
                if(temp < table[i])
                {
                    table[i] = temp;
                }
            }
        }
    }
    return table[m];
}

int main()
{
    int m;
    cin>>m;
    cout<<get_change(m)<<endl;
    return 0;
}
