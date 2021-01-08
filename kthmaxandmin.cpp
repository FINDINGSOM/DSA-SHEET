
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	//the number of elements you want
	cout<<"enter the number of elements"
	cin>>n;
	cout<<"enter the kth number";
	cin>>k;
	int arr[n];
	// enter the array elements
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
sort(arr,arr+n);
//kth min
cout<<arr[k-1]<<endl;
//kth max
cout<<arr[n-k]<<endl;




}
