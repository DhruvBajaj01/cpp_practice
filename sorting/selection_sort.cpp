#include<bits/stdc++.h>
using namespace std;

void selectionsort(int *arr,int n){
    
  for(int i = 0; i<n; i++){
   int min = arr[i];
   int loc = i;
   for(int j = i+1;j<n;j++){
       if(arr[j]<min){
           min = arr[j];
           loc = j;

       }

   }
   
       int temp;
       temp = arr[i];
       arr[i]= arr[loc];
       arr[loc]=temp;
   }
  }


int main(){
    int arr[] = {26,34,45,2,3,28,47,89,4,7,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}