#include <iostream>
using namespace std;

int main()
{
	int a= 10;
	int &r = a; //here r is the reference to a, a reference should be initialized instantly upon declaration
	cout<<r<<endl;
	a++;
	cout<<r<<endl;
	return 0;
}


//reference is nothing but an alias for a variable