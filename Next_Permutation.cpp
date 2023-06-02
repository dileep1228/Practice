#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int n = arr[N-1];
        int size = N-1;
        int i=0;
        for( i = N-2 ; i >=0 ; i--){
            if(arr[i] < arr[i+1]){
                break;
            }
        }
        if (i < 0){
            reverse(arr.begin() , arr.end());
            return arr;
        } 
        int j=0;
        for( j = N-1; j>i; j--){
            if(arr[j]>arr[i])
                break;
        }
        swap(arr[i],arr[j]);
        int halfSize = i+1;
        reverse(arr.begin() + halfSize, arr.end());
        
        return arr;
    }
};

int main(){
    Solution s;
    vector<int> arr;
    vector<int> sol;
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    sol = s.nextPermutation(5, arr);
    for(int i = 0;i<5;i++){
        cout<<sol[i]<<" ";
    }
    return 0;
} 