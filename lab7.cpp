//Implement  recersive descent and non -recursive predidictive parser 

#include<bits/stdc++.h> 
using namespace std; string s;
int i=0; bool E();
bool T();
bool F();
bool Ed();
bool Td(); bool T()
{
return 1&F()&Td();
}
bool E()
{
return 1&T()&Ed();
}
bool F()
{
if(s[i]=='a')
{i++;
return 1;} if(s[i]=='(')
{ i++;
bool c=E(); if(s[i]==')')
{ i++;
return 1&c;
}
else return 0;
}
return 0;
}
bool Ed()
{
if(s[i]=='+')
{ i++;
return 1&T()&Ed();
}
return 1;
}
bool Td()
{
if(s[i]=='*')
{ i++;
return 1&F()&Td();
}
return 1;
}
int main()
{
cout << "Given grammar-\nE -> TE'\nE' -> +TE'/NULL\nT -> FT'\nT' -> *FT'/NULL\nF
-> (E)/a\n";
cout << "String to be checked: ";
// string s; cin >> s;
27
 
if(E()&&i==s.size())
{
cout << "String is accepted\n";
}
else
cout << "String is rejected\n";
}
