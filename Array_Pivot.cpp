#include<iostream>
#include<vector>
using namespace std;


int pivotIndex(vector<int>& nums) {
       int sum=0;
        for(int x : nums){
            sum += x;
        }
        int temp_sum=0;
        for(int i = 0; i < nums.size(); i++){
            if(temp_sum == (sum-temp_sum-nums[i])){
                return i;
            }
            temp_sum += nums[i];
        }
        return -1;
   }

int main(){

	std::vector<int > nums = {1,1};

	cout<<pivotIndex(nums);

	return 0;

}