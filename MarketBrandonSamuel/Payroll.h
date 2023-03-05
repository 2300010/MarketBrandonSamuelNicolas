#pragma once

    // Class representing a payroll system
    class Payroll 
    {
    public:
        // Constructor
        Payroll();

        // Pays employees and updates total amount paid
        void payEmployees();

        // Returns the total amount paid to employees
        void getTotalPaid();
    };