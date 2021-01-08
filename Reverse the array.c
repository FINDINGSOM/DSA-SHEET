#include<iostream>

using namespace std;
int main(){
int n;
   int arr[n], i;
   cout<<"enter the number of elements";
   cin>>n;
    cout<<"Enter  Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(n-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
		
