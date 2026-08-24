#include <iostream>
using namespace std;

int getMax(int a[], int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

void countSort(int a[], int n, int pos)
{
    int b[100];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        count[(a[i] / pos) % 10]++;
    }

      for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    
    for (int i = n - 1; i >= 0; i--)
    {
        b[count[(a[i] / pos) % 10] - 1] = a[i];
        count[(a[i] / pos) % 10]--;
    }

    
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

void radixSort(int a[], int n)
{
    int max = getMax(a, n);

    for (int pos = 1; max / pos > 0; pos = pos * 10)
    {
        countSort(a, n, pos);
    }
}

int main()
{
    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;

    radixSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}