#include "VendingMachine.h"



VendingMachine::VendingMachine()
{

}


void VendingMachine::PrintIntro(float Funds) const
{
	system("cls");

	cout << "Vending Machine" << endl;
	cout << endl;
	cout << "Funds: " << Funds << endl;
	cout << "_____________________" << endl;
	cout << "What do you wanna do?" << endl;
	cout << "1. Inser Money" << endl;
	cout << "2. Make Selection" << endl;
}

float VendingMachine::AddFunds()
{
	system("cls");
	bool isRepeting = true;

	while (isRepeting)
	{
		cout << "How much do you want to insert?"<<endl;
		cin >> AmountInserted;
		if (AmountInserted >= 0)
		{
			return AmountInserted;
		}
		else if (AmountInserted < 0)
		{
			cout << "Insert a positive number."<<endl;
			cout << endl;
		}
	}
	return 0.0f;
}

float VendingMachine::ProcessFunds(float Price)
{
	string temp = "";
	cout << "Processing Order"<<endl;
	cout << "................" << endl;
	cout << "Order processed" << endl;
	cout << "Press ANY KEY to continue" << endl;
	cin.ignore();
	system("cls");
	return Price;
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
	return Selection::Cancel;
}

Selection VendingMachine::PickItem(float Funds) 
{
	system("cls");
	cout << "Funds: " <<Funds << endl;
	cout << "_______________" << endl;
	cout << "Pick an item:" << endl;
	cout << "1. " << std::get<0>(items[0]) << "........ " << std::get<1>(items[0]) << endl;
	cout << "2. " << std::get<0>(items[1]) << "........ " << std::get<1>(items[1]) << endl;
	cout << "3. " << std::get<0>(items[2]) << "........ " << std::get<1>(items[2]) << endl;
	cout << "4. " << std::get<0>(items[3]) << "........ " << std::get<1>(items[3]) << endl;
	cout << "6. Request exchange" << endl;

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
		else if (Answer[0] == 'a' || Answer[0] == '5')
		{
			return Selection::AddFunds;
		}
		else if (Answer[0] == 'c' || Answer[0] == 'e' || Answer[0] == '6')
		{
			return Selection::Cancel;
		}
		else
		{
			Repete = true;
			cout << "Select one of the above!"<<endl;
		}
	}
	return Selection::Cancel;
}

float VendingMachine::GetItemPrice(int position) const
{
	return std::get<1>(items[position]);
}

void VendingMachine::PrintFunds(float funds) const
{
	cout << "Balance: " << funds << endl;
}

float VendingMachine::ProcessExchange(float Funds)
{
	system("cls");
	cout << Funds << " money returned." << endl;
	cin.ignore();
	return 0.f;
}

//float VendingMachine::SetFunds(float amount) const
//{
//	return Funds + amount;
//}

string VendingMachine::StringToLower(string StringOfWords)
{
	for (int i = 0; i != StringOfWords.length(); i++)
	{
		StringOfWords[i] = tolower(StringOfWords[i]);
	}
	return StringOfWords;
}

