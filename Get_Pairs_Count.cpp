
#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> unmap;
        int count =0;
        
        for(int i=0;i<n;i++){
            unmap[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(unmap.find(k-arr[i]) != unmap.end()){
                if(k - arr[i] == arr[i]){
                    count += unmap[k-arr[i]] - 1;
                }
                else{
                    count += unmap[k-arr[i]];
                }
            }
        }
        return count/2;
    }
};

int main(){
    int arr[] = {1, 5, 7, 8};
    Solution s;
    cout<<s.getPairsCount(arr,4,5)<<endl;
}