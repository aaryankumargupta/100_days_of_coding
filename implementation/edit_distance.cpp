#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int edit_distance(const string &str1, const string &str2) {
  //write your code here
  vector<vector<int>> a(str1.length()+1, vector<int>(str2.length()+1));
  for(int i=0;i<=str1.length();i++)
  {
      for(int j=0;j<=str2.length();j++)
      {
          if(j == 0)
          {
              a[i][j] = i;
          }
          else if(i == 0)
          {
            a[i][j] = j;
          }
          else if(str1[i-1] == str2[j-1])
          {
            a[i][j] = a[i-1][j-1];
          }
          else
          {
            a[i][j] = min({a[i-1][j],a[i][j-1],a[i-1][j-1]})+1;
          }
      }
  }
  return a[str1.length()][str2.length()];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
