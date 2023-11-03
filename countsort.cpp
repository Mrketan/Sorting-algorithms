#include<iostream>
using namespace std;
void count_sort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<=n;i++){                            //to finf value of max number is denoted by k
        k=max(arr[i],k);
    }
    int count[10]={0};                                       //int*count=new int[k+1];

    for(int i=0;i<n;i++){                               // creat count array
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){                         // in previous arr count is count[i]+count[i-1]
        count[i]=count[i]+count[i-1];
    }
 
    int sol[n];
                                                           //create a solution array
    for(int i=n-1;i>=0;i--){
        sol[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<=n;i++){
        arr[i]=sol[i];                                 
    }
}
 
int main(){

    int arr[9]={2,6,7,4,3,7,8,4,9};

    count_sort(arr,9);

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }



}