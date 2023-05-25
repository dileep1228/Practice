#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int s = n;
        int right[n];
        int left[n];
        int maxi=0;
        for(int i=0;i<n;i++){
            right[i] = 0;
            left[i] = 0;
        }
        for(int i=0;i<n;i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                left[i] = arr[i];
            }
            else{
                left[i] = maxi;
            }
        }
        maxi =0;
        
        for(int j=s-1;j>=0;j--){
            if(arr[j]>maxi){
                maxi = arr[j];
                right[j] = arr[j];
            }
            else{
                right[j] = maxi;
            }
        }
        
        long long sum=0;
        for(int i=0;i<n;i++){
            sum += min(left[i],right[i]) - arr[i];
        }
        
        return sum;
    }
};


int main(){
    int arr[] = {2, 4, 6, 3, 5};
    Solution s;
    cout<<s.trappingWater(arr,5)<<endl;
}