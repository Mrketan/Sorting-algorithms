#include<iostream>
using namespace std;
void swap (int arr[],int x,int j){
    int temp=arr[x];
    arr[x]=arr[j];
    arr[j]=temp;
}
void DNF_sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    
    while(mid<=high){
        if(arr[mid]==0){


            swap(arr,mid,low);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }

    }
}
 
int main(){
    system("cls");

    int arr[7]={1,2,0,1,1,2,0,};

    DNF_sort(arr,7);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";

    }



}