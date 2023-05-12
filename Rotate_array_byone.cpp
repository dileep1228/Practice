
#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    int t;
    
    for(int i=0;i <n;i++){
        t = arr[i];
        arr[i] = temp;
        temp = t;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    rotate(arr,5);
    for(auto i:arr){
        cout<<i<<" ";
    }
}



