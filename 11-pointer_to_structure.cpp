#include <iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};

int main(){
	struct Rectangle r = {10,6};
	struct Rectangle *p; //pointer to a Rectangle structure
	p = &r; 

	cout<<r.length<<endl;
	//r.length = 20;  ->> using struct name
	//(*p).length = 20; --> using pointer to a structure
	p->length = 20;       // same method as the 2nd , just different syntax
	cout<<r.length<<endl;
	return 0;
}