#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;


void sortColors(vector<int>& nums) {
        int size = nums.size()-1;
        int zeros = 0;
        int twos = size;
        int floater = 0;

        while(floater<=size){

            if(nums[floater] == 0){
                swap(nums[floater],nums[zeros]);
                floater++;
                zeros++;
            }
            else if(nums[floater] == 2 && floater < twos){
                swap(nums[floater],nums[twos]);
                twos--;
            }
            else{
                floater++;
            }
        }
        
    }

int main(){
    vector<int> arr;

    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(1);

    sortColors(arr);
    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
