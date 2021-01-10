#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
   	int m,n;
   int i = 0, j = 0; 
		//number of elements
		cout<<"enter the number of elements you want";
	cin>>n>>m;
	
	int b[n];
	int a[m];
	cout<<"enter the elements for b array";
		for(int i=0;i<n;i++){
		cin>>b[i];
	
	}
	cout<<"enter the elements for a array";
	for(int i=0;i<m;i++){
		cin>>a[i];
		
	}
            while (i < n && j < m) { 
        if (b[i] < a[j]) 
            i++; 
        else if (a[j] < b[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            cout << a[j] << " "; 
            i++; 
            j++; 
        } 
    } 

    return 0;
} 
