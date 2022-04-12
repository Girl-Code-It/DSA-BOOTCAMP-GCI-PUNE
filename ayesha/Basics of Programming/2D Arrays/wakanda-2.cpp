#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>>& arr)
{
  // write your code here
  for(int gap=0; gap<n; gap++){
        for(int i=0, j=gap;j<n; i++,j++){
            cout<<arr[i][j]<<"\n";
        }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  upperDiagonal_traverse(n, arr);
}