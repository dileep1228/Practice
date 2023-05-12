#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
        set<int> st ;

        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
}

int main(){
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);

    if(containsDuplicate(arr)){
        cout<<"True";
    }
    else 
        cout<<"False";
}