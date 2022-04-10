#include<iostream>
#include<vector>

using namespace std;
//method1
void setZeroes(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int temp ; 

        for(int i=0;i<row;i++){
        	for(int j=0;j<col;j++){
        		if(matrix[i][j] == 0){
        			temp = 0;
        			while(temp < row){
        				if(matrix[i][temp]!=0)
        					matrix[i][temp] = -1;
        				temp++;
        			}
        			temp = 0;
        			while(temp < col){
        				if(matrix[temp][j]!=0)
        					matrix[temp][j] = -1;
        				temp++;
        			}
        		}
        	}
        }

        for(int i=0;i<row;i++){
        	for(int j=0;j<col;j++){
        		if(matrix[i][j] == -1 ){
        			matrix[i][j] = 0;
        		}
        	}}
	}
int main(){

	vector<vector<int>> arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
	setZeroes(arr);

	for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

return 0;
}