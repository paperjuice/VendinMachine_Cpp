#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>


#define cout std::cout
#define endl std::endl
#define cin std::cin
#define string std::string



enum class Selection
{
	Item1,
	Item2,
	Item3,
	Item4,
	AddFunds,
	Cancel,
	PickItem
};

class VendingMachine
{
public:
	VendingMachine();

	void PrintIntro(float) const;

	Selection PickItem(float);

	Selection AddFundsOrPickItem() ;
	float ProcessFunds(float PriceOfItem);

	void PrintFunds(float) const;
	float AddFunds();

	float SetFunds(float) const;


private:
	string StringToLower(string);
	//float Funds = 0.f;

	float AmountInserted = 0.f;



};

