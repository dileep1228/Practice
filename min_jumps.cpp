// naive :using recursion ===> try all possible ways 

// f(i) = {min number of steps needed to reach the end from i}
// f{i} = min( f{i+1},f{i+2},f{i+3},f{i+4},...) +1
// f{i} = min (f{i+j})+1  where j = 1 ...... n    here time complexity is O(n^2)
#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;


class Solution{
  public:
    int minJumps(int arr[], int n){
        int pos = 0;
        
        int count=0;
        
        while(pos<n){
            count++;
            int temp = arr[pos];
            int i = 1;
            int max = 0;
            int temp_pos = 0;
            while(i<=temp){
                if(max >0)
                    max -=1;
                if(arr[pos+i]>max){
                    // cout<<arr[pos+i]<<".  ";
                    max = arr[pos+i];
                    temp_pos = pos+i;
                }
                i++;
            }
            pos = temp_pos;
            // cout<<pos<<"     ";
            int k = pos + arr[pos];
            if(k+1 == n)count--;
            if(k>=n)break;
        }
        return count+1;
        
    }
};


int main(){
    int arr[] = {1, 4, 3, 2, 6, 7};
    Solution s;
    cout<<s.minJumps(arr,6)<<endl;
}