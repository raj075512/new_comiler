#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;
 #define mod 1000000007

int occurence(string &s,string &subseq,int n,int m,vector<vector<int>>&dp){ if(m==0 && n==0 || m==0) return 1;

if(n==0) return 0;
if(dp[n][m]!=-1) return dp[n][m]; if(s[n-1]==subseq[m-1])
return dp[n][m]=occurence(s,subseq,n-1,m-1,dp)+occurence(s,subseq,n-1,m,dp); return dp[n][m]=occurence(s,subseq,n-1,m,dp);
}

int main(){
     string s;
      cin >> s;
    string subseq; 
  cin >> subseq;
vector<vector<int>>dp(s.size()+1,vector<int>(subseq.size()+1,-1)); 
cout << occurence(s,subseq,s.length(),subseq.length(),dp) << endl;
}
