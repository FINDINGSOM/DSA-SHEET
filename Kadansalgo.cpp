#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
	cout<<"enter value for n";
  long int n;
  int cs,ms;
  
  cin>>n;
  cout<<"enter array elements";
  long int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  cs=a[0];
  ms=a[0];
	 for(int i=1;i<n;i++){
	 	cs=max(cs+a[i],a[i]);
	    ms=max(cs,ms);
}

cout<<"maxm sum"<<ms;
	
}
