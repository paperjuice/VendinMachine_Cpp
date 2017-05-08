#pragma once

#include <iostream>


#define cout std::cout
#define endl std::endl
#define cin std::cin


class VendingMachine
{
public:
	VendingMachine();

	void PrintIntro() const;


	void PrintFunds(float) const;
	float AddFunds();

	float SetFunds(float) const;


private:
	float Funds = 0.f;

	float AmountInserted = 0.f;



};

