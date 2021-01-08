#include<iostream>

using namespace std;
int main(){
	int arr[10]={6,2,3,4,5,7,8,9,4,15};
	int n;
	
	int min;
	int max;
	min=arr[0];
	max=arr[0];
	for(int i=0;i<10;i++){
		if (min > arr[i]){
			min=arr[i];
				}
				if(max< arr[i]){
					max=arr[i];
				}
				
	}
	cout<<min<<endl;
	cout<<max;
}
		
