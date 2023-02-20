#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
	//Declare variables
	string name;
	int cost;

public:
	
	//Declare Getter-Setter signatures
	string Get_Name();

	void Set_Name(string name);

	int Get_Cost();

	void Set_Cost(int cost);

};

