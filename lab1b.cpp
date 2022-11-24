
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;
 #define mod 1000000007

int main(){ string s; cin >> s;
string substr;
      cin >> substr;

int n=s.length();
int m=substr.length(); int count=0;

for(int i=0;i<=n-m;i++){ int j; for(j=0;j<m;j++){
if(s[i+j]!=substr[j]) break;
}
if(j==m) count+=1;
}
cout << count << endl;
}



