#include <iostream>
#include "VendingMachine.h"




int main()
{
	VendingMachine _v;

	float Funds;
	
	_v.PrintIntro();
	
	Funds = _v.AddFunds();
	_v.PrintFunds(Funds);


	return 0;
}