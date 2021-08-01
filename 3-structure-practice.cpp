#include<iostream>
using namespace std;


struct Complex{
	int real;
	int img;
};


int main()
{
	struct Complex z = {2,3}	;
	cout<<z.real<<" + "<<z.img<<" i"<<endl;
	return 0;
}