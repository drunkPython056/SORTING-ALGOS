#include <iostream>
using namespace std;

void Bubblesort(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {5, 3, 4, 1, 2};
    int n = 5;

    Bubblesort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}



