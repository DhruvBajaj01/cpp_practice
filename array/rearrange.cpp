#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int l){
    int j = 0,temp;
    for(int i = 0; i<l; i++){
        if(arr[i]<0){
            if(i!=j){
            temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;}
            j++;
        }
        
    }

}
void printArray(int arr[], int l){
 for(int i = 0;i<l;i++){
     cout<<arr[i]<< " ";
 }
}

int main(){

    int arr[10]= {1,2,3,4,-7,-1,-3,-4,-5,9};
    int l = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,l);
    printArray(arr,l);
     
    return 0;

}