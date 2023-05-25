#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int, int> mp;
    
    for(int i=0; i<n; i++){
        mp[a1[i]] += 1;
    }
    
    for(int j=0; j<m; j++){
        
        if(mp[a2[j]]>0){
            mp[a2[j]]--;
        }
        else{
            return "No";
        }
        
    }
    return "Yes";
    
}

int main(){
    int arr[] = {2, 4, -6, 3, 5};
    int arr2[] = {2,4,-3};
    cout<<isSubset(arr,arr2,5,3)<<endl;
}