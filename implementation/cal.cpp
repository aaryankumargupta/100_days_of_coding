#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <tuple>
#include <list>

using namespace std;

tuple<int, list<int>> get_num(int n)
{
    vector<int> a(n+1, INT_MAX);
    vector <int> note(n+1);
    a[0] = -1;
    a[1] = 0;
    int i;
    for(i=2;i<=n; i++)
    {
        a[i] = a[i-1]+1;
        note[i] = i-1;
        if(i%3 == 0)
        {
            if(a[i/3]+1 < a[i])
            {
                a[i] = a[i/3]+1;
                note[i] = i/3;
            }
        }
        if(i%2 == 0)
        {
            if(a[i/2]+1 < a[i])
            {
                a[i] = a[i/2]+1;
                note[i] = i/2;
            }
        }
    }
    list <int> seq;
    for(int i=n;i!= 0; i = note[i])
    {
        seq.push_front(i);
    }
    return make_tuple(a[n], seq);
}

int main()
{
    int n;
    cin>> n;
    list<int> a;
    int runs;
    tie(runs , a) = get_num(n);
    cout<<runs<<endl;
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop_front();
    }
    return 0;
}
