#include "Payroll.h"

using namespace std;

// constructor initializes minutesPassed and totalPayment to 0
Payroll::Payroll()
{
    minutesPassed = 0;
    totalPayment = 0;
}

// setter for minutesPassed
void Payroll::setMinutesPassed(int minutes)
{
    minutesPassed = minutes;
}

// getter for minutesPassed
int Payroll::getMinutesPassed() 
{
    return minutesPassed;
}

// calculate payment based on minutes passed
int Payroll::calculatePayment() 
{
    int payment = minutesPassed * 2600;
    totalPayment += payment; // add payment to totalPayment
    return payment;
}

