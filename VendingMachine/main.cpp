#include <iostream>
#include "VendingMachine.h"




int main()
{
	VendingMachine* VM = new VendingMachine();
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
			VM->PrintFunds(Funds);
			VM->PickItem();
			
		}



		VM->PickItem();

	}




	
	delete VM;
	return 0;
}