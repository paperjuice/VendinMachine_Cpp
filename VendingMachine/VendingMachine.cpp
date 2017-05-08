#include "VendingMachine.h"



VendingMachine::VendingMachine()
{

}



void VendingMachine::PrintIntro() const
{
	cout << "Vending Machine" << endl;
	cout << endl;
	cout << "1. Inser Money" << endl;
	cout << "2. Make Selection" << endl;
	cout << "_____________________" << endl;
	cout << "Funds: " << Funds << endl;
}

float VendingMachine::AddFunds()
{
	system("cls");
	cout << "How much do you want to insert?"<<endl;
	cin >> AmountInserted;

	return AmountInserted;
}



void VendingMachine::PrintFunds(float funds) const
{
	cout << "Balance: " << funds << endl;
}

float VendingMachine::SetFunds(float amount) const
{
	return Funds + amount;
}

