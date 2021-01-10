#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;


int main(){
	int i,m,n;
		//number of elements
		cout<<"enter the number of elements you want";
	cin>>m>>n;
	int a[m];
	int b[n];
	set<int > s1;
  
	for(int i=0;i<n;i++){
		cin>>b[i];
		s1.insert(b[i]);
	}
	
	for(int i=0;i<m;i++){
		cin>>a[i];
			s1.insert(a[i]);
	}
	cout<<"the array after union";
	set<int >::iterator itr;
	 for (itr = s1.begin(); 
         itr != s1.end(); ++itr) 
    {
        cout << *itr << ",";
    }
    cout<<"the size of the given arry is";
	cout<<s1.size()<<endl;
	return 0;
}
