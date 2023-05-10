#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

int find_kth_min_sorting(int arr[], int k,int size){

    sort(arr,arr+size); //sort the array 

return arr[k-1];
}

int find_kth_min_set(int arr[], int k,int size){

    set<int> s(arr, arr+size); // keep the values in set

    set<int>::iterator itr = s.begin();  // start an iterator
 
    advance(itr, k - 1); // move to kth place 

    return *itr;

}
int findpos(int arr[],int start,int end){

    if(start == end)
        return start;
    int pivot = end;
    // cout<<"pivot"<<pivot<<endl;
    int min_index = start;
    int max_index = end-1;
    while(min_index < max_index){
        // cout<<"min "<<min_index<<"max "<<max_index<<endl;
        while(arr[min_index]<arr[pivot] && min_index < max_index){
            min_index++;
        }
        while(arr[max_index]>arr[pivot] && min_index < max_index){
            max_index--;
        }
        // cout<<arr[min_index]<<"+"<<min_index<<" "<<arr[max_index]<<"+"<<max_index<<endl;
        if(min_index<max_index)
            swap(arr[min_index],arr[max_index]);
        min_index++;
        max_index--;
        // cout<<"+++++"<<"min "<<min_index<<"max "<<max_index<<endl;


    }
    swap(arr[pivot],arr[max_index+1]);

    return max_index+1;

}

int Kthsmallest_quickselect(int arr[], int k,int start, int end){

    int pos = findpos(arr,0,end);
    // cout<<endl<<pos<<endl;
    
    if(pos+1 == k){
        return arr[k-1];
    }
    else if(pos+1 > k){
        return Kthsmallest_quickselect(arr,k,start,pos-1);
    }
    else{
        return Kthsmallest_quickselect(arr,k,pos+1,end);
    }
    return pos;

}


int main(){
    
    int arr[] = { 351, 834, 659 ,131 ,73 ,104 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    cout<<Kthsmallest_quickselect(arr,k,0,N-1);
}