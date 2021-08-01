#include <iostream>
using namespace std;
int main()
{

	int n;

	cout<<"enter array size ";

	cin>> n;



	int a[n];
	
	a[0]=100;

	
	for(int x:a){
		cout<<x<<endl;
	}

	return 0;
}