#include <iostream>
#include <vector>

using namespace std;

int get_max(vector<int> w, int m)
{
    vector<int> mover(m+1, -1);
    int k = w.size();
    while(k != 0)
    {
        
    }
}

int main()
{
    int m,p;
    vector<int> w;
    cin>>m>>p;
    for(int i=0;i<p;i++)
    {
        cin>>w[i];
    }
    int res = get_max(w, m);
    return 0;
}