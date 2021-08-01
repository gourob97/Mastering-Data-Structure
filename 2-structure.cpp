#include <iostream>
using namespace std;

struct Rectangle
{
	int length; //4 bytes
	int breadth; // 4 bytes
};


//Rectangle object will take 4+4= 8  bytes of memory

int main()
{
	struct Rectangle rec = {20,15};

	// rec.length = 20;
	// rec.breadth = 15;

	cout<< rec.length<<endl;
	cout<< rec.breadth;

	return 0;
}
