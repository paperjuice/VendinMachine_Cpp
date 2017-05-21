#include <iostream>
#include "VendingMachine.h"


VendingMachine* VM = new VendingMachine();
float Funds = 0.0f;

float ProcessSelection(Selection);
float AskForMoreMoney(int);

int main()
{
	Selection selection;
	string Answer = "";
	


	while (true)
	{
		VM->PrintIntro(Funds);

		selection = VM->AddFundsOrPickItem();

		if (selection == Selection::AddFunds)
		{
			Funds += VM->AddFunds();
		}
		else if (selection == Selection::PickItem)
		{
			selection = VM->PickItem(Funds);

			if (selection == Selection::AddFunds)
			{
				Funds += VM->AddFunds();
			}
			else if (selection == Selection::Cancel)
			{
				Funds = VM->ProcessExchange(Funds);
			}
			else 
			{
				Funds -= ProcessSelection(selection);
			}

		}

		
	}
	
	delete VM;
	return 0;
}

float ProcessSelection(Selection Answer)
{
	switch (Answer)
	{
	case Selection::Item1:
		return AskForMoreMoney(0);
		break;
	case Selection::Item2:
		return AskForMoreMoney(1);
		break;
	case Selection::Item3:
		return AskForMoreMoney(2);
		break;
	case Selection::Item4:
		return AskForMoreMoney(3);
		break;
	default: 
		return 0;
		break;
	}
}

float AskForMoreMoney(int item)
{
	if (Funds >= VM->GetItemPrice(item))
	{
		return VM->ProcessFunds(VM->GetItemPrice(item));
	}
	else
	{
		cout << "You need more funds!";
		cin.ignore();
		return 0.f;
	}
}

