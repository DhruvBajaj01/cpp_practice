// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currSum = arr[0];
        int maxSum = currSum;
        for (int i = 0; i < n; i++) {
        currSum = arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        for (int j = i + 1; j < n; j++) {
            currSum = currSum + arr[j];
            if (currSum > maxSum) {
                maxSum = currSum;
            }
        }
    }

    return maxSum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}