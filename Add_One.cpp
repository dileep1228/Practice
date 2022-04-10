#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void add_one(vector<int> arr){

	vector<int> dup ;

	int size = arr.size();

	arr[size - 1] += 1;
	//cout<<arr[size - 1]<<"   "<<size<<endl;

	while(size>0){
		if(arr[size - 1] == 10){
			if(size-1 == 0){
				dup.push_back(0);
				dup.push_back(1);
				break;
			}
			dup.push_back(0);
			arr[size - 2] += 1;
			size --;
		}
		else{
			dup.push_back(arr[size-1]);
			size--;
		}
	}

	reverse(dup.begin(),dup.end()); 
	for(int x : dup){
		cout<<x<<" ";
	}
}

int main(){

	std::vector<int> arr = {1,2,3};
	add_one(arr);

	return 0;
}