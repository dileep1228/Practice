#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long prefix = 1;
	    long long suffix = 1;
	    long long maxprod = INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        if(prefix == 0) prefix = 1;
	        if(suffix == 0) suffix = 1;
	        prefix = prefix * arr[i];
	        suffix = suffix * arr[n-i-1];
	        maxprod = max(maxprod,max(prefix,suffix));
	    }
	    
	    return maxprod;
	}
};

int main(){
    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    Solution s;
    cout<<s.maxProduct(arr,5)<<endl;
}