#pragma once
#include "ErrorManager.h"

// Class representing a payroll system
class Payroll 
{
    ErrorManager myErrorManager;

public:

    Payroll(); // constructor

    void SetMinutesPassed(int minutes); // setter for minutes passed
    int GetMinutesPassed(); // getter for minutes passed

    //Signature get for total payment
    int GetTotalPayment();

    int CalculatePayment(); // calculate payment based on minutes passed

    //Activates the payment of employees
    void PaymentActivation();

private:

    int minutesPassed; // number of minutes passed
    int totalPayment; // total payment to employees
};