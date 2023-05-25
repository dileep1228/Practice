#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;



class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      
      unordered_map<int,int> mp;
      int count =0;
      
      for(int i=0; i<N; i++){
          mp[arr[i]] = 1;
      }
      
      for(int j = 0; j < N ;j++){
          if(mp.find(arr[j]-1) == mp.end()){
              int c =0;
              while(mp.find(arr[j]++) != mp.end() ){
                  c++;
              }
              count = max(count, c);
          }
      }
      
     return count; 
      
    }
};


int main(){
    int arr[] = {2, 4, -6, 3, 5};
    Solution s;
    cout<<s.findLongestConseqSubseq(arr,5)<<endl;
}