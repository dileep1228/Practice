#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    long long mini =INT_MAX;
    
    for(int i=0; i<n; i++){
        if((i+m-1) >= n)break;
        mini = min(mini,a[i+m-1]-a[i]);
        
    }
    
    return mini;
    }   
};


int main(){
    vector<long long> arr ;
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(12);
    arr.push_back(56);
    Solution s;
    cout<<s.findMinDiff(arr,7,3)<<endl;
}