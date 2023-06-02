#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    int dist( string &s1, string &s2, int m, int n, vector<vector<int>> &dp){
        
        if(m<0) return n+1;
        if(n<0) return m+1;
        
        if(dp[m][n] != -1) return dp[m][n];
        
        if(s1[m] == s2[n]){
            return dp[m][n] = dist(s1, s2, m-1, n-1, dp);
        }
        return dp[m][n] = 1 + min(dist(s1, s2, m-1, n, dp),min(dist(s1, s2, m, n-1, dp),dist(s1, s2, m-1, n-1, dp)));
    } 
    int editDistance(string s, string t) {
        // Code here
        int m = s.size()-1;
        int n = t.size()-1;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        
        return dist(s,t,m,n,dp);
    }
};


int main(){
    Solution s;
    cout<<s.editDistance("geek","gek")<<endl;
}