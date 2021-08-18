#include <iostream>
using namespace std;


struct Rectangle{
	int length;
	int breadth;
};


int main()
{
	struct Rectangle *p ;
	p = new struct Rectangle;
	p->length =10;
	p->breadth = 6;

	cout<< p->length <<endl;
	cout<< p->breadth <<endl;
	return 0;
}