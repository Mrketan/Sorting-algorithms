#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i]; 
                                         //to create the temp block.

        while(j>=0 && arr[j]>temp)
        {                                //compare with temp element
        arr[j+1]=arr[j];
        j--;
        }
        arr[j+1]=temp;   
    } 

}
int main(){
    int n;
    cout<<"enter the no of n";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

insertion_sort( arr,n);

  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }  
    

}