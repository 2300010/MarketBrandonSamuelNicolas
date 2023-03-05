#pragma once
#include "UiManager.h"

class ErrorManager
{
	UiManager myUiManager;


public:
	
	ErrorManager() {}


	//Function to verify if the input is a double
	double DoubleInputValidator(istream& stream);

	//Function to verify if the input is a int
	int IntInputValidator(istream& stream);
	
	UiManager GetUiManager();

};

