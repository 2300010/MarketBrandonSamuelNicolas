#pragma once
#include "Time.h"

// Abstract class representing time
    class Time 
    {
    public:
        virtual ~Time() {}

        // Returns the current time point
        virtual chrono::system_clock::time_point now() const = 0;

        // Calculates the time elapsed between two time points
        virtual chrono::duration<double> elapsedSeconds(const chrono::system_clock::time_point& start, const chrono::system_clock::time_point& end) const = 0;
    };

    // Class representing system time
    class SystemTime : public Time 
    {
    public:
        // Returns the current system time point
        virtual chrono::system_clock::time_point now() const override;

        // Calculates the time elapsed between two time points
        virtual chrono::duration<double> elapsedSeconds(const chrono::system_clock::time_point& start, const chrono::system_clock::time_point& end) const override;
    };

    // Class representing a payroll system
    class Payroll 
    {
    public:
        // Constructor
        Payroll();

        // Pays employees and updates total amount paid
        void payEmployees();

        // Returns the total amount paid to employees
        double getTotalPaid() const;

    private:
        Time* time;         // Pointer to the time object
        double totalPaid;   // Total amount paid to employees
    };