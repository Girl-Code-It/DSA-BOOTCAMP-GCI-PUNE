// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotate(vector<vector<int>> arr, int r)
// {
//     r = r % arr.size();
//     if (r < 0)
//     {
//         r = r + arr.size();
//     }
//     reverse(arr.begin(), arr.begin() + r);
//     reverse(arr.begin() + r + 1, arr.end());
//     reverse(arr.begin(), arr.end());
// }

// void fillOneD(vector<vector<int>> arr, int s)
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
//     for (int j = minC; j <= maxC; j++)
//     {
//         arr2[count] = arr[maxR][j];
//         count++;
//     }
//     // right wall
//     for (int i = maxR; i >= minR; i--)
//     {
//         arr2[count] = arr[i][maxC];
//         count++;
//     }

//     // top wall
//     for (int j = maxC; j >= minC; j--)
//     {
//         arr2[count] = arr[minR][j];
//         count++;
//     }
// }
// void fillshell(vector<vector<int>> arr, int s, vector<int> arr2)
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
//     for (int j = minC; j <= maxC; j++)
//     {
//         arr[maxR][j] = arr2[count];
//         count++;
//     }
//     // right wall
//     for (int i = maxR; i >= minR; i--)
//     {
//         arr[i][maxC] = arr2[count];
//         count++;
//     }

//     // top wall
//     for (int j = maxC; j >= minC; j--)
//     {
//         arr[minR][j] = arr2[count];
//         count++;
//     }
// }

// void rotateShell(vector<vector<int>> arr, int s, int r)
// {
//     vector<int> oned = fillOneD(arr, s);
//     rotate(oned, r);
//     fillshell(arr, s, oned);
// }

// void create(vector<int> arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }

// void display(vector<int> arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         .cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     create(arr, n);
//     int s, r;
//     cin >> s >> r;
//     rotateShell(arr, s, r);
//     display(arr, n);
//     return 0;
// }
