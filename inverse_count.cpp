#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

class Solution{
    long long count =0;
  public:
    void countinversions(long long arr[], long long start, long long mid, long long end){
        int left_arr_size = mid - start + 1;
        int right_arr_size = end - mid;
        
        int left_arr[left_arr_size];
        int right_arr[right_arr_size];
        
        for(int i = 0;i<left_arr_size;i++){
            left_arr[i] = arr[start+i];
        }
        
        for(int j=0;j<right_arr_size;j++){
            right_arr[j] = arr[j+mid+1];
        }
        
        int i1, j1, k;
        i1 = 0;
        j1 = 0;
        k = start;
        
        while(i1 < left_arr_size && j1 < right_arr_size ){
            if(arr[i1]<arr[j1]){
                arr[k] = left_arr[i1];
                i1++;
            }
            else{
                arr[k] = right_arr[j1];
                j1++;
                count += mid-i1;
            }
        }
        while (i1 <= mid - 1)
        arr[k++] = left_arr[i1++];
 
    
        while (j1 <= end)
            arr[j1++] = right_arr[j1++];
        
    }
    void merge(long long arr[], long long start, long long end){
        if(start > end)
            return ;
        long long mid = (start+end)/2;
        merge(arr, start, mid);
        merge(arr, mid+1, end);
        countinversions(arr,start, mid, end);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long start = 0;
        long long end = N;
        // long long mid = (start+end)/2;
        
        merge(arr, start, end);
        return count;
       
    }

};

int main(){
    long long arr[] = {2, 4, 1, 3, 5};
    Solution s;
    cout<<s.inversionCount(arr,5)<<endl;
}