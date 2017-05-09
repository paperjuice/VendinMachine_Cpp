#pragma once

#include <iostream>


#define cout std::cout
#define endl std::endl
#define cin std::cin



enum class Selection
{
	Item1,
	Item2,
	Item3,
	Item4,
	AddFunds,
	Cancel
};

class VendingMachine
{
public:
	VendingMachine();

	void PrintIntro() const;

	Selection MakeSelection();

	void PrintFunds(float) const;
	float AddFunds();

	float SetFunds(float) const;


private:
	float Funds = 0.f;

	float AmountInserted = 0.f;



};

