#include<iostream>
using namespace std;

struct Student{
	
	char name[25];
	int cls;
	int roll;
	char dept[5];

};


int main()
{

	struct Student s;

	s.name[0] = 'G';
	s.name[1] = 'o';
	s.name[2] = 'u';
	s.name[3] = 'r';
	s.name[4] = 'o';
	s.name[5] = 'b';
	s.cls = 16;
	s.roll = 1;
	s.dept[0] = 'C';
	s.dept[1] = 'S';
	s.dept[2] = 'E';




	cout<< "Hi my name is "<<s.name <<". I read in class "<<s.cls <<" in "<<s.dept<<" Department. "<<"My roll is "<<s.roll<<endl;

}