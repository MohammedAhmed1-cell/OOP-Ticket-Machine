#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class showSeat
{
public:
	showSeat();
	~showSeat();
	void initialiseFloorPlan();
	int getNumSeats();
	void getSeatSelection(int& r, int& c);

public:
	void displayFloorPlan();
	void calculatePrice(double& price);

protected:
	char floorPlan[7][6];
	int numSeats;
	int rNum; //used to calculate prices
	double price;
};

//constructor
showSeat::showSeat()
{
	for (int r = 0; r < 7; r++)
		for (int c = 0; c < 6; c++)
			floorPlan[r][c] = '0'; //allocates memory slots for for plan array

	numSeats = 0;
	rNum = 0;
	price = 0; //initialises remaining variables
}

//destructor
showSeat::~showSeat()
{

}

//initialises theartre floor plan
void showSeat::initialiseFloorPlan()
{
	for (int r = 0; r < 7; r++)
	for (int c = 0; c < 6; c++)
	floorPlan[r][c] = 'A';
}

//gets users no. of seats
int showSeat::getNumSeats()
{
	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~Select Seats Interactively~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	do
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "How many tickets would you like to purchase (Max. 8)?"; //prompts customers to enter how many tickets
		cin >> numSeats;
		cout << endl;
	} while (numSeats < 1 || numSeats > 8);

	return numSeats;

}

void showSeat::displayFloorPlan()
{
	char terminator;

	cout << "These are the seats that are avaliable: " << endl;

	for (int r = 0; r < 7; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			cout << floorPlan[r][c];
		}
		cout << endl;
	}
	cin.get(terminator);
}

void showSeat::getSeatSelection(int& r, int& c)
{
	int row;
	int col;
	bool gotSeat = false;

	while (!gotSeat)
	{
		cout << "Enter row of seat: " << endl;

		cin >> row;

		cout << "Enter coloumn seat: " << endl;

		cin >> col;

		if (row < 0 || row > 6)
		{
			cout << "Row must be between 0 and 6!" << endl;
			continue;
		}
		if (col < 0 || col > 5)
		{
			cout << "Coloumn must be between 0 and 5!" << endl;
			continue;
		}
		if (floorPlan[row][col] != 'A')
		{
			cout << "That seat is already taken" << endl;
			continue;
		}
		r = row;
		c = col;
		floorPlan[row][col] = 'B';
		gotSeat = true;
	}

}