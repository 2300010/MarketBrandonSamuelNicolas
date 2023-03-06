#pragma once
#include "Warehouse.h"
#include "ErrorManager.h"
#include "Payroll.h"
#include "Catalog.h"

class InformationDisplayManager
{
	ErrorManager myErrorManager;
	Warehouse myWarehouse;
	Payroll myPayroll;
	Catalog myCatalog;

public:
	//SIGNATURES
	//Determines what to display for the user
	void DisplayChoice();
};

