// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void reverse(vector<int> &oned, int start, int end)
// {
//     while (start < end)
//     {
//         int temp = oned[start];
//         oned[start] = oned[end];
//         oned[end] = temp;
//         start++;
//         end--;
//     }
// }
// void rotate(vector<int> &arr, int r)
// {
//     int s = arr.size();
//     r = r % s;
//     if (r < 0)
//     {
//         r += s;
//     }
//     reverse(arr, 0, arr.size() - 1 - r);
//     reverse(arr, arr.size() - r, arr.size() - 1);
//     reverse(arr, 0, arr.size() - 1);
// }

// int *fillOneDFromShell(vector<vector<int>> &arr, int s)
// {
//     int minR = s - 1;
//     int minC = s - 1;
//     int maxR = arr.size() - s;
//     int maxC = arr[0].size() - s;
//     int size = 2 * (maxR - minR + maxC - minC);
//     vector<int> arr2(size);
//     int count = 0;

//     //   left wall
//     for (int i = minR; i <= maxR; i++)
//     {
//         arr2[count] = arr[i][minC];
//         count++;
//     }
//     // bottom wall
//     for (int j = minC + 1; j <= maxC; j++)
//     {
//         arr2[count] = arr[minR][j];
//         count++;
//     }
//     // right wall
//     for (int i = maxR - 1; i >= minR; i--)
//     {
//         arr2[count] = arr[i][maxC];
//         count++;
//     }

//     // top wall
//     for (int j = maxC - 1; j >= minC + 1; j--)
//     {
//         arr2[count] = arr[minR][j];
//         count++;
//     }
//     return arr2;
// }
// void fillshellFromOneD(vector<vector<int>> &arr, int s, vector<int> &arr2)
// {
//     int minR = s - 1;
//     int minC = s - 1;
//     int maxR = arr.size() - s;
//     int maxC = arr[0].size() - s;
//     int count = 0;

//     //   left wall
//     for (int i = minR; i <= maxR; i++)
//     {
//         arr[i][minC] = arr2[count];
//         count++;
//     }
//     // bottom wall
//     for (int j = minC + 1; j <= maxC; j++)
//     {
//         arr[minR][j] = arr2[count];
//         count++;
//     }
//     // right wall
//     for (int i = maxR - 1; i >= minR; i--)
//     {
//         arr[i][maxC] = arr2[count];
//         count++;
//     }

//     // top wall
//     for (int j = maxC - 1; j >= minC + 1; j--)
//     {
//         arr[minR][j] = arr2[count];
//         count++;
//     }
// }

// void rotateShell(vector<vector<int>> &arr, int s, int r)
// {
//     vector<int> oned = fillOneDFromShell(arr, s);
//     rotate(oned, r);
//     fillshellFromOneD(arr, s, oned);
// }

// void create(vector<int> arr, int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }

// void display(vector<int> arr, int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     create(arr, n, m);
//     int s, r;
//     cin >> s >> r;
//     rotateShell(arr, s, r);
//     display(arr, n, m);
//     return 0;
// }
