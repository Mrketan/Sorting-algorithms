//Quick Sort
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int partition(int arr[],int l, int h){
    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i<j){
        while(pivot>=arr[i]){
            i++;
        }

        while(pivot<arr[j]){
            j--;
        }
        if(i<j){
            swap(arr,i,j);
        }


    }
    swap(arr,l,j);
    return j;
}

void quickSort(int arr[],int l, int h){
    if(l<h){
        int pivot = partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}
int main(){
    system("cls");
    int arr[7]={3,9,7,4,1,6,5};
    quickSort(arr,0,6);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    
}