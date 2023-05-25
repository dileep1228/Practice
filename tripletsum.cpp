#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0; i<n-1; i++){
            int sum = X - A[i];
            int start = i+1;
            int end = n-1;
            while(start<end){
                int mini_sum = A[start]+A[end];
                if( mini_sum == sum){
                    return true;
                }
                else if(mini_sum < sum){
                    start++;
                }
                else{
                    end--;
                }
            }
            
        }
        return false;
    }
};

int main(){
    int arr[] = {2, 4, 6, 3, 5};
    Solution s;
    cout<<s.find3Numbers(arr,5,112)<<endl;
}