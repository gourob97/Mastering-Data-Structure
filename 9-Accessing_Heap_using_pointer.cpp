#include<iostream>
using namespace std;
int main()
{
		int *p; //this pointer is in stack
		p = new int[5] ;//this is in heap || malloc alternative  ||allocated memory from heap
		p[0] = 10;
		p[1] = 20;
		p[2] = 30;
		p[3] = 40;
		p[4] = 50;

		for(int i = 0; i<5 ; i++){
			cout<<p[i]<<endl;
		}
		delete []p; // de-allocating the memory from heap, after finishing task
    return 0;
}