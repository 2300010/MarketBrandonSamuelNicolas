#include "OutputManager.h"

//Function to clear input and print a error message
void OutputManager::Error(std::istream& stream, string message)
{
	try
	{
		stream.clear();
		stream.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "\nError! " << message << ".";
	}
	catch (...)
	{

	}
}
