#include <iostream>
using namespace std;

/*

Cards has three characteristics: face, shape, color

face code
----------
Ace -1,2,3,4,5,6,7,8,9,10, J-11,Q-12,K-13

shape code
------------
club --> 0
Spade --> 1
Diamond --> 2
Heart --> 3

color
---------
Black --->0
Red --> 1




*/

struct Card{
	int face,shape,color;
};

int main()
{
	// struct Card card1={7,2,0};
	// cout<< sizeof(card1);


	struct Card deck[52] = {
		{1,0,0},
		{1,0,1},
		{1,1,1}
	} ;


	cout<< deck[0].face << deck[0].shape << deck[0].color;
}