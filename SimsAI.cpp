#include<iostream> 
using namespace std;

int main()
{
	int hunger = 80;

	if (hunger < 50)
		cout << "Sim must eat now";
	else if (hunger == 50)
		cout << "Sim is hungry but is not in need of food";
	else if (hunger <= 75)
		cout << "Sim is not very hungry";
	else
		cout << "Sim is full";
}