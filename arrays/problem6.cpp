#include <iostream>
using namespace std;

int* mergeArrays(int arr1[], int arr2[], int n1, int n2)
{
    int *arrUnion = new int[n1 + n2]; // Dynamically allocate memory
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (k == 0 || arrUnion[k - 1] != arr1[i])
            {
                arrUnion[k] = arr1[i];
                k++;
            }
            i++;
        }
        else
        {
            if (k == 0 || arrUnion[k - 1] != arr2[j])
            {
                arrUnion[k] = arr2[j];
                k++;
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (k == 0 || arrUnion[k - 1] != arr1[i])
        {
            arrUnion[k] = arr1[i];
            k++;
        }
        i++;
    }

    while (j < n2)
    {
        if (k == 0 || arrUnion[k - 1] != arr2[j])
        {
            arrUnion[k] = arr2[j];
            k++;
        }
        j++;
    }

    return arrUnion; // Return the pointer to the dynamically allocated array
}
int * intersection(int arr1[], int arr2[], int n1, int n2)
{
    int * array= new int [n1+n2];
    int i = 0, j = 0, k = 0;
    while(i<n1&& j<n2)
    {
        
        if(arr1[i]<arr2[j])
        {
            i++;
            
        }
        else if (arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            if(k==0||array[k-1]!=arr1[i])
            {
                array[k]=arr1[i];
                i++;
                j++;
                k++;

            }
        }
    }
    return array;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 11, 14, 16, 42, 42, 131};
    int arr2[] = {11, 14, 15, 16, 16, 27, 89};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int *p = intersection(arr1, arr2, n1, n2);
    int n3 = n1 + n2;

    display(p, n3); // Display the merged array

    delete[] p; // Deallocate the dynamically allocated memory

    return 0;
}
