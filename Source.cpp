#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
//#include  <bits/stdc++.h>
using namespace std;

class customer {
private:
	char name[30];
	int phone_number, NumberOfDays, roomNumber;
	double bill;
	string date, time, roomType;
public:
	void bookRoom();
	void complain();
	void payBill(double);
	double calculateBill(string, int);

};

void customer::bookRoom() {
	cout << "\n---------------------------------------Welcome to Hotel---------------------------------------";
	cout << "\nPlease enter your name: ";
	cin >> name;
	cout << "\nPlease select room type (Exective, Delux Suite, Standarad Suite, Standarad Double-bed, Standarad Double-bed): ";
	cin >> roomType;
	cout << "\n Enter number of days: ";
	cin >> NumberOfDays;
	cout << "\nPlease Enter your phone number: +92";
	cin >> phone_number;

	bill = calculateBill(roomType, NumberOfDays);

	payBill(bill);
}

void customer::complain() {
	string complain_text;
	cout << "\n---------------------------------------Complain Utility---------------------------------------";
	cout << "\nPlease inform us about any problem below: " << endl;		
	cin >> complain_text;
	cout << "\nWe will make sure to provide you better service";

}

void customer::payBill(double bill) {
	string method;
	cout << "\nYour total bill is PKR " << bill << " only, would you like to pay through debit/credit card or cash? ";
	cin >> method;

	if ((method == "credit") || (method == "debit")) {
		cout << "**********Cheer up! You are getting 14% off your total payment due**********";
	}
	roomNumber = rand() % 900 + 100;
	cout << endl << "Thanks for choosing us for your beautifull moments\nYour room number is: " << roomNumber;
}

double customer::calculateBill(string type, int days) {
	double amount;
	if (type == "executive")
		amount = 140000.00;
	else if (type == "delux")
		amount = 105000.05;
	else if (type == "standarad_suite")
		amount = 87500.75;
	else if (type == "double_bed")
		amount = 49999.99;
	else if (type == "single_bed")
		amount = 34999.99;
	else {
		cout << endl << "Wrong Input";
		exit(1);
	}

	return (days * amount);
}

int main() {
	char yesOrNo;
	int iter = 0, choice;
	srand(time(NULL));
	customer customerEntity[5];
	do
	{
		cout << endl << "Select option: \n1- Book Room\n2- Complain\n3- Change room" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			customerEntity[iter].bookRoom();
			break;

		case 2:
			customerEntity[iter].complain();
			break;

//		case 3:
//			customerEntity[iter].changeRoom();
//			break;

		default:
			cout << "\nSomething went wrong";
			break;
		}

		cout << "\nwant to perform another operation? ";
		cin >> yesOrNo;
		iter++;
	} while (((yesOrNo == 'y') || (yesOrNo == 'Y')) && (iter < 5));

	return 0;
}