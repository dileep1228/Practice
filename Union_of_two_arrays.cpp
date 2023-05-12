#include <stdio.h>
#include <vector>
#include <iostream>
#include<set>

using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> st;
        
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        for(int j =0 ;j< m ;j++){
            st.insert(b[j]);
        }
        
        return st.size();
    }
};

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n], b[m];

        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        
        Solution ob;
        cout<< ob.doUnion(a,n,b,m) <<endl;
    }
    return 0;
}