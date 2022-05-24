#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,m;
        cin>>n>>m;
        int bigg= INT_MIN,temp;
        for(int i=0;i<n;i++)
        {
            int ma = INT_MIN,mi = INT_MAX;
            for(int j=0;j<m;j++)
            {
                cin>>temp;
                if(temp>ma)
                {
                    ma = temp;
                }
                if(temp<mi)
                {
                    mi = temp;
                }
            }
           // cout<<mi<<"\t"<<ma<<endl;
            if((ma - mi) > bigg)
            {
                bigg = ma-mi;
            }
        }
        cout<<bigg<<endl;
    }
    return 0;
}
