#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class show
{
public:
	show();
	~show();
	void selectShow(string& showName, string& showDate);
	string selectTime();

protected:
	string showName;
	string showDate;
	string showTime;
};

//Constructor
show::show()
{
	showName = "";
	showDate = "";
	showTime = "";
}

//Destructor
show::~show()
{
}

//Customer selects upcoming show
void show::selectShow(string& showName, string& showDate)
{
	char ch;
	char terminator;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Select Upcoming Show~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. Star Wars: The Musical (20/05/2013)" << endl;
	cout << "2. Les Miserables (21/05/2013)" << endl;
	cout << "3. The Phantom Of The Opera (22/05/2013)" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a show number: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a show number: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showName = "Star Wars: The Musical", showDate = "20/05/2013";
		break;
	case '2': showName = "Les Misarbles", showDate = "21/05/2013";
		break;
	case '3': showName = "The Phantom Of The Opera", showDate = "22/05/2013";
		break;
	}

	this->showName = showName;
	this->showDate = showDate;
	cin.get(terminator);
}

string show::selectTime()
{
	char ch;
	char terminator;

	system("CLS");

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Select Time of Show~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "1. 12:00pm" << endl;
	cout << "2. 3:00pm" << endl;
	cout << "3. 5:00pm" << endl;

	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please select a show time: ";
	cin.get(ch);

	while (ch != '1' && ch != '2' && ch != '3')
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please select a show time: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case '1': showTime = "12:00pm";
		break;
	case '2': showTime = "3:00pm";
		break;
	case '3': showTime = "5:00pm";
		break;
	}

	cout << "You have chosen: " << showTime << endl;

	this->showTime = showTime;

	cin.get(terminator);

	return showTime;
}
