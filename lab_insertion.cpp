#include <iostream>
using namespace std;

void insertion_sort(int a[],int n){


	int i,j,num;
	for ( i = 1; i < n; i++)
	{
		num = a[i];
		for ( j = i- 1; j >= 0; j--)
		{
			if(a[j]>num){
				a[j+1] = a[j];
			}else{
				break;
			}
			a[j+1] = num;

		}
		
	}
	
}


int main()
{
    int a[] = {5, 3, 4, 1, 2};
    int n = 5;

    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
