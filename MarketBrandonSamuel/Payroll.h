#pragma once

    // Class representing a payroll system
    class Payroll 
    {
    public:
        Payroll(); // constructor
        void setMinutesPassed(int minutes); // setter for minutes passed
        int getMinutesPassed(); // getter for minutes passed
        int calculatePayment(); // calculate payment based on minutes passed
    private:
        int minutesPassed; // number of minutes passed
        int totalPayment; // total payment to employees
    };