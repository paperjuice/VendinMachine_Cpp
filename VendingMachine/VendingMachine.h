#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <tuple>
#include <vector>

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
	float ProcessExchange(float Funds);

	void PrintFunds(float) const;
	float AddFunds();

	float GetItemPrice(int position) const;

	//float SetFunds(float) const;


private:
	string StringToLower(string);
	//float Funds = 0.f;

	float AmountInserted = 0.f;

	std::vector<std::tuple<string, float>> items = { {"Item1", 10.0f}, {"Item2", 20.f}, {"Item3", 5.5f}, {"Item4", 20.f} };


};

