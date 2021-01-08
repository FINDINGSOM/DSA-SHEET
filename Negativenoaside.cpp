#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
      int x=0;
	
	//the number of elements you want
	cout<<"enter the number of elements";
	cin>>n;

	int arr[n];
	// enter the array elements
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
	for(int i=0;i<n;i++){
	 if (arr[i]<0)
	{
	 swap(arr[i],arr[x]);
	 
	 x++;
	}
}
	
	for(int i=0;i<n;i++){
	cout<<arr[i];
}
	return 0;}	
		
