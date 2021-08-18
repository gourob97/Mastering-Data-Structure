#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int *p; //declaration of pointer 
	p = &n;// assignment of pointer
	cout<<p<<endl; 
	cout<<*p<<endl; // dereferncing
    
    return 0;
}