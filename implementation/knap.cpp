#include <iostream>
#include <vector>

using namespace std;

int optimal_weight(int W, const vector<int> &w) {
  //write your code here
  vector<vector<int>> v(w.size()+1, vector<int> (W+1,0));
  for(int i=1;i<=w.size();i++)
  {
    for(int j=1;j<=W;j++)
    {
      v[i][j] = v[i-1][j];
      if(w[i-1] <= j)
      {
        int val = v[i-1][j-w[i-1]]+w[i-1];
        if(val > v[i][j])
        {
          v[i][j] = val;
        }
      }
    }
  }
  /*for(int i=0;i<=w.size();i++)
  {
    for(int j=0;j<=W;j++)
    {
      cout<<v[i][j]<<"\t";
    }
    cout<<endl;
  }*/
  return v[w.size()][W];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
