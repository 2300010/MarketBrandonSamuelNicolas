#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
	//Declare variables
	string name;
	int price;
	int cost;
	int totalAmountBought = 0;
	int totalAmountSold = 0;
	int inInventory = 0;

public:
	
	//Declare constructor
	Item(string name, int price, int cost)
	{
		this->name = name;
		this->price = price;
		this->cost = cost;
	}

	//Declare Getter-Setter signatures
	string Get_Name();
	void Set_Name(string name);

	int Get_Price();
	void Set_Price(int price);

	int Get_Cost();
	void Set_Cost(int cost);

	int Get_Amount_Bought();
	void Set_Amount_Bought(int amountBought);

	int Get_Amount_Sold();
	void Set_Amount_Sold(int amountSold);

	int Get_In_Inventory();
	void Set_In_Inventory(int quantity);

};

