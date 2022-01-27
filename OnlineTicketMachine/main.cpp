#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"

int main()
{
	//Initial variable declarations

	string a, b, c, f, g, h;
	int d;
	double e;
	char ch, terminator;
	int row, col;

	//Objects
	showSeat SEAT;
	customer CUST;
	show SHOW;
	ticket * TICK = nullptr;

	//Deals with getting customer information
	CUST.getLogin();
	CUST.getProfileInfo(f, g, h);

	//Displays main menu and allows customer to choose option
	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Main Menu~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. Buy tickets" << endl;
	cout << "2.Log out\n" << endl;
	cout << "Please enter a menu choice" << endl;
	cin.get(ch);

	while (ch != '1' && ch != '2')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select valid menu choice number";
		cin.get(ch);
	}

	if (ch == '2')
	{
		return EXIT_SUCCESS;
	}

	//Deals with selecting a show
	do
	{
		SHOW.selectShow(a, b);
		c = SHOW.selectTime();

		do
		{
			cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
			cin.get(ch);
		} while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
		cin.get(terminator); //clears buffer
	} while (ch == 'N' || ch == 'n');

	//Deals with selecting seat and calculating price of seats
	SEAT.initialiseFloorPlan();
	SEAT.displayFloorPlan();
	d = SEAT.getNumSeats();
	SEAT.getSeatSelection(row, col);
	SEAT.displayFloorPlan();

	//Deals with discounts, payment and ticket generation
	/*TICK->~ticket();
	TICK->cost();
	TICK->setPrice(double price);
	TICK->printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);*/

	system("CLS");
	
	int totalCost = 0;
	totalCost = d * 20;

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Your tickets~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "=====================================================================" << endl;
	cout << "================= The Bucks Centre for the Perfomring Arts ===========" << endl;
	cout << "================= Enjoy the show! ================" << endl;
	cout << "Show:" << f << endl;
	cout << "Date:" << g << endl;
	cout << "Time:" << h << endl;
	cout << "======================================================================" << endl;
	cout << "Number or seats: " << d << endl;
	cout << "Total cost: " << (char)156 << totalCost << endl;
	cout << "Ticket purchase" << f << " " << g << endl;
	cout << "Postal address" << h << endl;
	cout << "======================================================================" << endl;
	cout << "======================================================================\n\n" << endl;

}