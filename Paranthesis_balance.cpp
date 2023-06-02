#include <stdio.h>
#include <vector>
#include <iostream>
#include<stack>
#include <set>
#include <unordered_map>

using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        
        int n = x.size();

        for(int i=0;i<n;i++){
            
            if(x[i] == '{' || x[i] == '(' || x[i] == '['){
                st.push(x[i]);
            }
            else{
                if(st.empty()) {
                return false; 
                }
                else if(x[i] == '}'){
                    if(st.top() == '{')
                        st.pop();
                    else
                        return false;
                }
                else if(x[i] == ')'){
                    if(st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                else if(x[i] == ']'){
                    if(st.top() == '[')
                        st.pop();
                    else
                        return false;
                }
                
            }
        }
        if(st.size() != 0 )return false;
        return true;
    }

};


int main(){
    Solution s;
    cout<<s.ispar("{}}()")<<endl;
}