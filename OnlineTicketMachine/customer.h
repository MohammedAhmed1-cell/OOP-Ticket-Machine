#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;

class customer
{
public:
	customer();
	~customer();
	void getLogin();
	void getProfileInfo(string& fName, string& sName, string& address);
	//void getPaymentInfo();

protected:
	string fName;
	string sName;
	string address;
};

//Constructor
customer::customer()
{
	fName = "";
	sName = "";
	address = "";
}

//Destructor
customer::~customer()
{
}

//Customer log ins
void customer::getLogin()
{
	string username;

	string password;

	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~ Log In ~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

	cout << "\nWelcome to the Bucks Centre for the Performing Arts ticket purchasing system" << endl;
	cout << "                              Please log in" << endl;

	cout << "Enter username: " << endl;
	getline(cin, username);
	while (username.length() > 10)
	{
		cout << "Your username should be no more than 10 chracters long" << endl;
		cout << "Please re-enter your username: ";
		getline(cin, username);
	}

	cout << "Enter password: ";
	getline(cin, password);

	while (password.length() > 10)
	{
		cout << "Your password should be no more than 10 chracters long" << endl;
		cout << "Please re-enter your password: ";
		getline(cin, password);
	}
}

void customer::getProfileInfo(string& fName, string& sName, string& address)
{
	cout << "Enter your first name: " << endl;
	getline(cin, fName);

	cout << "Enter your surname name" << endl;
	getline(cin, sName);

	cout << "Enter your Address" << endl;
	getline(cin, address);
}

//void customer::getPaymentInfo()
//{
//	cout << "Please enter your card number: " << endl;
//
//	cout << "Please enter your sort code: " << endl;
//	
//}