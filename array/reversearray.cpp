
#include <iostream>
using namespace std;

void reverse(int *arr, int end, int start){
    while(start<=end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
        
    }
    
     
}
void printarray(int *arr, int size){
    for(int i = 0;i<size;i++ ){
        cout<<arr[i];
    }
}

int main() {
    
    
    int arr[6] ={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    //int *p = arr;
    reverse(arr, n-1, 0);
  
    printarray(arr,n);
    
    return 0;
}