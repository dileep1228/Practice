//Kadanes algorithm

#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long int Global_max = arr[0];
        int temp_max = 0;
        long int sum =0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum>Global_max)
                Global_max = sum;
            if(sum <0)
                sum = 0;
        }
        return Global_max;
        
    }
};


int main(){
    int t,n;

    cin>>t; //input testcases
    while(t--){
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        Solution sol;
        cout << sol.maxSubarraySum(a,n)<<endl;
    }
}