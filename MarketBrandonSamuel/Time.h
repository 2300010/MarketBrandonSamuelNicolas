#pragma once
#include <chrono>

using namespace std;


class Time
{
public:
	virtual ~Time() {} //virtual destructor //purpose =  ensure that all resources used by an object are properly deallocated when that object is deleted whether the delete operation is performed on a pointer to the base class or a pointer to a derived class.
	virtual chrono::system_clock::time_point now() const = 0; // abstract function to get current time
};

// Declare SystemTime class

class SystemTime : public Time
{
public:
	virtual chrono::system_clock::time_point now() const override
	{
		return chrono::system_clock::now(); // return the current system time
	}
};