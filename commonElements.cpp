
#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;



class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> temp;
            set<int> s;
            vector<int> temp1;
            
            int a=0,b=0;
            
            while(a<n1 && b<n2){
                if(A[a] == B[b]){
                    temp.push_back(A[a]);
                    a++;
                    b++;
                }
                else if(A[a] < B[b]){
                    a++;
                }
                else{
                    b++;
                }
            }
            
            int n4 = temp.size();
            
            a = 0, b = 0;
            
            while(a<n3 && b<n4){
                
                if(C[a] == temp[b]){
                    s.insert(temp[b]);
                    a++;
                    b++;
                }
                else if(C[a] < temp[b]){
                    a++;
                }
                else{
                    b++;
                }
                
            }
            
            vector<int> v(s.begin(), s.end());
            
            return v;
            
        }

};

int main(){
    int arr1[] = {1, 5, 7, 8};
    int arr2[] =  {2 , 5, 6, 9};
    int arr3[] = {2, 3, 4, 5, 9};
    Solution s;
    vector<int> sol = s.commonElements(arr1,arr2,arr3,4,4,5);

    int p = sol.size();

    for(int i1=0;i1 < p;i1++)
        cout<<sol[i1]<<"  ";
    

    return 0;
}