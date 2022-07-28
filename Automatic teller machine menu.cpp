// Automatic teller machine menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int cardnum, deposit, withdrawal, choice;
	double amount = 10000.00;
	double newamount = 0;
	char pin;

	cout << "Enter your card number" << endl;
	cin >> cardnum;
	cout << "Enter your pin" << endl;
	cin >> pin;

	cout << "......MENU......." << endl;
	cout << " 1: check balance " << endl;
	cout << " 2: deposit " << endl;
	cout << " 3: withdrawal " << endl;
	cout << " 4: exit " << endl;
	cin >> choice;
	cout << "Enter your choice" << endl;
	cin >> choice;

	if (choice == 1) {
		cout << "Current  balance on your account  is: R " << amount << endl;
	}
	else if (choice == 2) {
		cout << "Enter the amount you want to deposit" << endl;
		cin >> deposit;
		amount = amount + deposit;
		cout << "Current  balance on your account  is: R " << amount << endl;


	}
	else if (choice == 4) {
		cout << "Enter the amount you want to withdraw" << endl;
		cin >> withdrawal;
		if (withdrawal > amount) {
			cout << "You don't have sufficient balance" << endl;
		}
		else {
			newamount = amount - withdrawal;
			cout << "Current  balance on your account  is:R" << newamount << endl;
		}
	}
	else if (choice == 4) {

		cout << "THANK FOR USING SHAI PETRUS ATM" << endl;

	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
