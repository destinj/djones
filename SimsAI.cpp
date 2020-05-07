#include<iostream> 
using namespace std;

int main()
{
	int hunger = 80; //Test value for hunger.

	if (hunger < 50) //If the Sim's hunger is below 50 the Sim is starving
		cout << "Sim must eat now";
	else if (hunger == 50) //If the Sim's hunger is equal to 50 the Sim is not in need of food
		cout << "Sim is hungry but is not in need of food";
	else if (hunger <= 75) //If the Sim's hunger is 51 - 75 the sim is not very hungry
		cout << "Sim is not very hungry";
	else
		cout << "Sim is full"; //If the Sim's hunger is 76-100 the Sim is full
}