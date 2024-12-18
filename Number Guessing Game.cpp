#include<iostream>
using namespace std;
int main()//Main fuction
{
	int num,guess,tries;//Declaring Variables
	srand(time(NULL));
	//sets the starting seed value for the pseudorandom number generator used by the rand() function
	num=(rand()%100)+1;//for generating random number
	cout<<"Welcome to the Number Guessing Game"<<endl;//Game menu screen title
	do{
		cout<<"Enter your guess between 1-100"<<endl;//asking for the guess
		cin>>guess;
		tries++;
		//conditions and there outputs:
		if(guess>num)
		{
			cout<<"Guess is higher than actual number"<<endl;
		}
		else if(guess<num)
		{
			cout<<"Guess is lower than the actual number"<<endl;
		}
		else
		{
			cout<<"Yaay!!You Guessed the correct number"<<endl;
		}
		
	}
	while(guess!=num);
}
