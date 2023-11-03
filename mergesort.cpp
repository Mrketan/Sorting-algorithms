// Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int L, int mid, int R)
{
    int i = L;
    int j = mid + 1;
    int temp[R + 1];
    int k = L;

    while (i <= mid && j <= R)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= R)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    else{

        while (i <= mid)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }

    }

    for (i = L; i <= R; i++)
    {
        arr[i] = temp[i];
    }
}

void merge_sort(int arr[], int L, int R)
{
    if (L < R)
    {
        int mid = (L + R) / 2;
        merge_sort(arr, L, mid);
        merge_sort(arr, mid + 1, R);
        merge(arr, L, mid, R);
    }
}

int main()
{
    system("cls");
    int arr[7] = {8, 2, 1, 6, 3, 4, 5};
    merge_sort(arr, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
}