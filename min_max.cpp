//finding minimum and maximum in a array
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

struct Pair {
    int min;
    int max;
};

int main(){
    vector<int> arr;
    struct Pair minmax;

    arr.push_back(-10);
    arr.push_back(23);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(11);
    arr.push_back(111);
    arr.push_back(10);

    if (arr[0] > arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    else{
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    for (int i=2;i<arr.size();i++) {
        
        if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        else if(arr[i] > minmax.max){
            minmax.max = arr[i];
        }
    }
    cout<<minmax.min<<"     "<<minmax.max;

}

