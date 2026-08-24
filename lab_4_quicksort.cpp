


//QUICKSORT
#include <iostream>
using namespace std;

void quick_s(int arr[], int low, int high) {
    if (low >= high)
        return;

    int pivot = arr[low];
    int i = low;
    int j = high;

    do {
         while (i <= high && arr[i] <= pivot){
		i++;
	 };

         while (j >= low && arr[j] > pivot){
		j--;
	
	 };

        if (i < j)
            swap(arr[i], arr[j]);

    } while (i < j);

    swap(arr[low], arr[j]);

    quick_s(arr, low, j - 1);
    quick_s(arr, j + 1, high);
}

int main() {
    int n = 7 ;

   

    int arr [ n ] = {6,2,7,4,8,1,9,0};

   
    quick_s(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

#include<iostream>
using namespace std;

void print(int a[])
{
    for(int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
}

int partition(int a[], int low, int high)
{
    int pvt = a[low];
    int i = low + 1;
    int j = high;

    while(i < j)
    {
        while(a[i] < pvt)
        {
            i++;
        }

        while(a[j] > pvt)
        {
            j--;
        }

        if(i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

    } 

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}







