#include <bits/stdc++.h>
using namespace std;
 
#define N 4
 
// Function to rotate the matrix 90 degree clockwise
void rotate90Clockwise(int arr[N][N])
{
    // printing the matrix on the basis of
    // observations made on indices.
    for (int i = 0; i < N; i++) 
    {
        for (int j = N - 1; j >= 0; j--)
            cout << arr[j][i] << " ";
        cout << '\n';
    }
}
 
// Driver code
int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate90Clockwise(arr);
    return 0;
}
