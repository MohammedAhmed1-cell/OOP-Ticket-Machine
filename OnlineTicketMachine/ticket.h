#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ticket
{
public:
	ticket();
	~ticket();
	void setPrice(double price);
	void printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);
	virtual double cost() = 0;

protected:
	double totalCost;
};

//Constructor
ticket::ticket()
{
	totalCost = 0;
}

//Destructor
ticket::~ticket()
{
}

//Calculates discount cost from total price
void ticket::setPrice(double price)
{
	totalCost = price;
	cout << "\nThe total price of your tickets (Including any discounts) is" << (char)156 << totalCost << ".\n" << endl;
	system("PAUSE");
}

//Prints tickets using data from derived classes
void ticket::printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address)
{
	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Your tickets~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "=====================================================================" << endl;
	cout << "================= The Bucks Centre for the Perfomring Arts ===========" << endl;
	cout << "================= Enjoy the show! ================" << endl;
	cout << "Show:" << showName << endl;
	cout << "Date:" << showDate << endl;
	cout << "Time:" << showTime << endl;
	cout << "======================================================================" << endl;
	cout << "Number or seats: " << numSeats << endl;
	cout << "Total cost: " << (char)156 << this->cost() << endl;
	cout << "Ticket purchase" << fName << " " << sName << endl;
	cout << "Postal address" << address << endl;
	cout << "======================================================================" << endl;
	cout << "======================================================================\n\n" << endl;
}
