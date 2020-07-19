#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    // Reverse per row
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0, k = 3 - 1; j < k; j++, k--)
        {
            swap(a[j][i], a[k][i]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
