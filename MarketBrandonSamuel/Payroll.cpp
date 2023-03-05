#include "Payroll.h"

// Returns the current system time point
chrono::system_clock::time_point SystemTime::now() const
{
    return chrono::system_clock::now();
}

// Calculates the time elapsed between two time points
chrono::duration<double> SystemTime::elapsedSeconds(const chrono::system_clock::time_point& start, const chrono::system_clock::time_point& end) const 
{
    return end - start;
}

// Constructor
Payroll::Payroll() 
{
    time = new SystemTime;
    totalPaid = 0;
}

// Pays employees and updates total amount paid
void Payroll::payEmployees() 
{
    chrono::system_clock::time_point now = time->now();
    chrono::duration<double> elapsedSeconds = time->elapsedSeconds(time->now(), now);
    double minutesSinceLastPaid = elapsedSeconds.count() / 60.0;
    double payment = minutesSinceLastPaid * 2600.0;
    totalPaid += payment;
}

// Returns the total amount paid to employees
double Payroll::getTotalPaid() const
{
    return totalPaid;
}
