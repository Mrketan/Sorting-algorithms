// #include<iostream>
// using namespace std;

// void selection_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){

//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;

//             }
//         }
//     }
// }
 
// int main(){

//     int n;
//     cout<<"enter the no of n";
//     cin>>n;
//     int arr[n];
     
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//      }

//      selection_sort(arr,n);

//      for(int i=0;i<n;i++){
//         cout<<arr[i];
//      }

// }


#include <stdio.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
