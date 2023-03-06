#include "Payroll.h"

using namespace std;

// constructor initializes minutesPassed and totalPayment to 0
Payroll::Payroll()
{
    minutesPassed = 0;
    totalPayment = 0;
}

// setter for minutesPassed
void Payroll::SetMinutesPassed(int minutes)
{
    minutesPassed = minutes;
}

// getter for minutesPassed
int Payroll::GetMinutesPassed() 
{
    return minutesPassed;
}

//Signature get for total payment
int Payroll::GetTotalPayment() 
{
    return totalPayment;
}

// calculate payment based on minutes passed
int Payroll::CalculatePayment() 
{
    int payment = minutesPassed * 2600;
    totalPayment += payment; // add payment to totalPayment
    return payment;
}

//Activates the payment of employees
void Payroll::PaymentActivation()
{
    myErrorManager.GetUiManager().AskMinutesPassed();

    //Receive user input
    SetMinutesPassed(myErrorManager.IntInputValidator(cin));

    myErrorManager.GetUiManager().PrintPaymentInfo(minutesPassed, CalculatePayment(), totalPayment);
}