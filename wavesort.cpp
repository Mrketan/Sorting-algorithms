#include<iostream>
using namespace std;
void swap(int arr[],int x,int j){
    int temp=arr[x];
    arr[x]=arr[j];
    arr[j]=temp;
}

void wave_sort(int arr[],int n){
 for(int i=1;i<=n-2;i+=2){
    if(arr[i-1]<arr[i]){
        swap(arr,i,i-1);

    }
    if(arr[i+1]<arr[i]){
        swap(arr,i,i+1);

    }
 }
}
 
int main(){
    int arr[9]={2,3,8,9,5,6,7,1,4};

    wave_sort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}


