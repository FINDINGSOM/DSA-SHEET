#include<iostream>
using namespace std;
int main(){
	int l;
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	l=a[n-1];
	for(int i=n-2;i>=0;i--){
		a[i+1]=a[i];
	}
	
	a[0]=l;
		for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	
	
	
	
}
