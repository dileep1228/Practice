#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int sum =0;
        int size =0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == 0)
                return true;
            
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
            else{
                // size = max(size,i-mp[sum]+1);
                return true;
            }
        }
        
        return false;
    }
};

int main(){
    int arr[] = {2, 4, -6, 3, 5};
    Solution s;
    cout<<s.subArrayExists(arr,5)<<endl;
}