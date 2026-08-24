#include <iostream>
using namespace std;

void selection(int a[], int n)
{
    int i, j, small, b, temp;

    for (i = 0; i < n - 1; i++)
    {
        small = a[i];
        b = i;

        for (j = i + 1; j < n; j++)
        {
            if (small > a[j])
            {
                small = a[j];
                b = j;
            }
        }

        
        temp = a[i];
        a[i] = a[b];
        a[b] = temp;
    }
}

int main()
{
    int a[] = {64, 25, 12, 22, 11};
    int n = 5;

    selection(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}