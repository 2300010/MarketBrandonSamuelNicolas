#include "ErrorManager.h"

//Declare instance of OutputManager
OutputManager outputManager;

//Function to verify if the input is a double
double ErrorManager::DoubleInputValidator(istream& stream)
{
	try
	{
		double userInput;
		while (true)
		{
			//Receive input 
			stream >> userInput;
			//Verify if the entry is the right type of variable and postivie
			if (stream.fail() || userInput < 0)
			{
				//Reset state and content of cin
				outputManager.Error(stream, "Please enter a positive value: ");
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		return userInput;
	}
	catch (...)
	{

	}
}

//Function to verify if the input is a int
int ErrorManager::IntInputValidator(istream& stream)
{
	try
	{
		int userInput;
		while (true)
		{
			//Receive input 
			stream >> userInput;
			//Verify if the entry is the right type of variable and postivie
			if (stream.fail() || userInput < 0)
			{
				//Reset state and content of cin
				outputManager.Error(stream, "Please enter a positive value: ");
			}
			else
			{
				//If fail() is false
				//Break out of the loop
				break;
			}
		}
		return userInput;
	}
	catch (...)
	{

	}
}
