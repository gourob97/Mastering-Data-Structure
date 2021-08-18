#include <iostream>
using namespace std;

int main(){
	int A[5]={10,20,30,40,50};  //this is in stack
	int *p;
	p = A ;
	for(int i = 0; i<5; i++)
		cout<<p[i]<<endl;

}