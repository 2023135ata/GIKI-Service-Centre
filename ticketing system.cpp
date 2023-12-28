#include<iostream>
using namespace std;

void tickets (int a)
{
	cout << "|---------------|"<<endl;
	cout << "|    Events:    |" << endl;
	cout << "|---------------|"<<endl;
	cout << "1. Abdul hannan concert (GMS)"<<endl;
	cout << "2. Airex (AIAA)(Upcoming)"<<endl;
	cout << "3. Intra Mimes (Naqsh Arts)"<<endl;
	cout << "3. NEO (National Electronics Olympiad) (IEEE)"<<endl;
	cout << "4. Back to main menu";
	cout << "Selected option : ";
	cin >> a;
	if (a == 5)
	{
		mm();
	}
	cartt (a);
}
