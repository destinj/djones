#include <iostream>
#include <vector>

using namespace std;

int main()
{

	//Initializing vector called vr.
	vector <int> vr;
	//This loop will add elements to the end of the vector.
	do {
		cout << "Enter an integer: "; 
		int Element;
		cin >> Element; //Reading in an integer for the next element in the vector.

		vr.push_back(Element); //Adding an element to the back of the vector
		cout << "Current size of vector is: " << vr.size() << endl;
		
		cout << "Add more integers? y/n: ";
		char vAnswer;
		cin >> vAnswer;
		if (vAnswer == 'y') continue;

		vr.pop_back(); 	//pop_back will delete the last element in the vector.
		cout << "Current size of vector is: " << vr.size() << endl;

		break;

	} while (true);

	for (vector<int>::iterator iterator = vr.begin(); //Displays vector from front to back.
		iterator!= vr.end();
		cout << *iterator++ << endl);
	cout << endl << "Vector ordered from front to back" << endl;

	cout << "See what is in an element (enter integer):  "; int ePlace; //Shows the user what value is in a certain element. 
	cin >> ePlace;
	cout << "The integer in element " << ePlace << " is " << vr.at(ePlace) << endl;


	return 0;

}