//https://leetcode.com/problems/search-a-2d-matrix/submissions/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> arr, int target) {

    int row = arr.size();
    int col = arr[0].size();

    //cout<<row<<" "<<col<<"  "<<target<<endl;
    int i=0,j=0;

    int r_mid = (i + row)/2;
    //cout<<r_mid<<endl;

    while(r_mid > i && r_mid < row){

        if(arr[r_mid][0] == target) return true;

        if(arr[r_mid][0] < target){
                i = r_mid;
        }
        else{
            row = r_mid;
        }
        r_mid = (i + row)/2;
    }

    i = r_mid; //2

    //cout<<i<<endl;


    int mid;
    mid = (j+col)/2;
    //cout<<mid<<endl;

    while(mid>j && mid < col){
        if(arr[i][mid] == target)
            return true;
        else if(arr[i][mid]<target){
            j =mid;
        }
        else{
            col = mid;
        }
        //cout<<j<<"  "<<col<<endl;
        mid = (j+col)/2;

        //cout<<mid<<endl;
    }
    if(arr[i][mid] == target)
            return true;

        return false;
}

int main(){

    vector<vector<int>> arr = {{}};
    int targ =8 ;

    bool sol = searchMatrix(arr,targ);

    cout<<sol<<endl;
    

    return 0;
}