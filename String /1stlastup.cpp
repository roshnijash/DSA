#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

  string s;
  getline(cin,s);

 for(int i=0;i<s.size();i++){
     s[0]=toupper(s[0]);
     s[s.size()-1]=toupper(s[s.size()-1]);
if(s[i]==' '){
 s[i-1]=toupper(s[i-1]);
 s[i+1]=toupper(s[i+1]);
}
}
cout<<s;
    return 0;
}
