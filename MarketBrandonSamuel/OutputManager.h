#pragma once
#include <vector>
#include <array>
#include "Item.h"

class OutputManager
{
public:

	//Function to clear input and print a error message
	void Error(std::istream& stream, string message);

	//Function to present the list of products to the buyer
	void PrintCatalogList(vector<Item> productList)
	{

	}

	//Overload of the function to present the list of products to the buyer
	void PrintCatalogList(array<Item,6> productList)
	{

	}
};

