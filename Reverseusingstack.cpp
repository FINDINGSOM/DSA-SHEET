#include<bits/stdc++.h>

using namespace std;
void reverseit(string s){
	 stack<string> stc;
 
  
  string s1="";
 
  for(int i=0;i<s.length();i++)
  {
    if(s[i]==' ')
    {
       
      
      stc.push(s1); 
       

      s1="";          
    }
    else
    {
      s1=s1+s[i];
    }
 
  }
 
  
  stc.push(s1);
 
  while(!stc.empty()) {
 
    
    s1=stc.top();
    cout<<s1<<" ";
    stc.pop();
  }
  cout<<endl;
}

int main(){
string s="My name is lol";

reverseit(s);
return 0;	
}
