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

Selection VendingMachine::AddFundsOrPickItem() 
{
	string Answer = "";
	bool IsRepeting = true;
	
	while (IsRepeting)
	{
		IsRepeting = false;
		getline(cin, Answer);
		
		Answer = StringToLower(Answer);


		if (Answer[0] == '1' || Answer[0] == 'a') 
		{
			return Selection::AddFunds;
		}
		else if (Answer[0] == '2' || Answer[0] == 'm')
		{
			return Selection::PickItem;
		}
		else
		{
			cout << "Choose one of the above" << endl;
			IsRepeting = true;
		}
		
	}
}

Selection VendingMachine::PickItem()
{
	string Answer = "";
	bool Repete = true;

	while (Repete)
	{
		Repete = false;
		getline(cin, Answer);
		Answer = StringToLower(Answer);

		if (Answer[0] == '1' || Answer == "item1")
		{
			return Selection::Item1;
		}
		else if (Answer[0] == '2' || Answer == "item2")
		{
			return Selection::Item2;
		}
		else if (Answer[0] == '3' || Answer == "item3")
		{
			return Selection::Item3;
		}
		else if (Answer[0] == '4' || Answer == "item4")
		{
			return Selection::Item4;
		}
		else if (Answer[0] == 'a')
		{
			return Selection::AddFunds;
		}
		else if (Answer[0] == 'c' || Answer[0] == 'e')
		{
			return Selection::Cancel;
		}
		else
		{
			Repete = true;
			cout << "Select one of the above!"<<endl;
		}
	}
}

void VendingMachine::PrintFunds(float funds) const
{
	cout << "Balance: " << funds << endl;
}

float VendingMachine::SetFunds(float amount) const
{
	return Funds + amount;
}

string VendingMachine::StringToLower(string StringOfWords)
{
	for (int i = 0; i != StringOfWords.length(); i++)
	{
		StringOfWords[i] = tolower(StringOfWords[i]);
	}
	return StringOfWords;
}

