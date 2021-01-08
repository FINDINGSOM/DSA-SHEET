#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int i;
	int zeros=0;
	int ones=0;
	int twos=0;
	
	//the number of elements you want
	cout<<"enter the number of elements";
	cin>>n;

	int arr[n];
	// enter the array elements
	for(int i=0;i<n;i++){
	cin>>arr[i];
}
	for(int i=0;i<n;i++){
             if(arr[i]==0)
             	zeros++;
				 else if(arr[i]==1)
				 ones++;
				else
				 twos++;
}
cout<<zeros<<" "<<ones<<" "<<twos<<endl;

for(int i=0;i<zeros;++i)
     arr[i]=0;

for(int i=zeros;i<zeros + ones;++i)
	arr[i]=1;

while(twos--)
arr[i++]=2;
		

for(int i=0;i<n;++i){
	cout<<arr[i];
}
return 0;		
}
		
		
		
		
