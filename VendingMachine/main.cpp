#include <iostream>
#include "VendingMachine.h"




int main()
{
	VendingMachine* VM = new VendingMachine();
	Selection selection;
	string Answer = 0;
	


	while (true)
	{
		VM->PrintIntro();

		selection = VM->AddFundsOrPickItem();
		

		VM->PickItem();

	}




	
	delete VM;
	return 0;
}