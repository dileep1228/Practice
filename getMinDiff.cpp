
// for explanitation : https://www.youtube.com/watch?v=VFKgBh164HI&ab_channel=BroCoders

#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        
        int ans = arr[n - 1] - arr[0];
        
        int tempmin = arr[0] ;
        int tempmax = arr[n-1];
        
        for(int i=1;i<n;i++){
            
            if(arr[i]-k <0)
                continue;
                
            tempmin = min(arr[0]+k, arr[i]-k);
            tempmax = max(arr[i - 1] + k, arr[n - 1] - k);
            
            ans = min(ans, tempmax - tempmin);
        }
        
        return ans;
        
    }

    
};

int main(){
    int arr[] = {3, 9, 12, 16, 20};
    Solution s;
    cout<<s.getMinDiff(arr,5,3)<<endl;
}