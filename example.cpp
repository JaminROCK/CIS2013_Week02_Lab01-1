#include <iostream>
using namespace std;

int main() 
{
	int room_length = 5;
	int room_height = 10;
	float romm_radius = 10.0;
	bool keep_running = true;
	char question = 'y'

	/*
		cout << "Our first number is " << a << "\n";
		cout << "Our secpmd number is " << b << "\n";
		// Finding the area of our room by mutiplying Length times width
		cout << "if you mutiplying them you will get " << room_length * room_height << "\n";
		cout << "Unless your rooms a circle " << (room_length * room_height)*3.41 << "\n";
	*/

	while (keep_running)
	{
		cout << "Enter your first number: ";
		cin >> room_length;

		cout << "Enter your second number: ";
		cin >> room_height;

		if (room_length > room_height)
		{
			cout << "Length and width greater than width" << endl;
		}
		else
		{
			cout << "width and width greater than Length" << endl;
			
		}

		cout << "Run again (y/n): ";
		cin >> question;
		if (question != 'y') 
		{
			keep_running = false;
		}
	}
	return 0;
}
