#include <iostream>
#include "VendingMachine.h"


VendingMachine* VM = new VendingMachine();

float ProcessSelection(Selection);
int main()
{
	Selection selection;
	float Funds = 0.0f;
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

			if (selection != Selection::AddFunds || selection != Selection::Cancel)
			{
				Funds -= ProcessSelection(selection);
			}
			else if (selection == Selection::AddFunds)
			{
				Funds += VM->AddFunds();
			}
			else if (selection == Selection::Cancel)
			{
				//TODO: add behaviour
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
		return VM->ProcessFunds(10);
		break;
	case Selection::Item2:
		return VM->ProcessFunds(20);
		break;
	case Selection::Item3:
		return VM->ProcessFunds(5);
		break;
	case Selection::Item4:
		return VM->ProcessFunds(15.5f);
		break;
	default: 
		return 0;
		break;
	}

}
