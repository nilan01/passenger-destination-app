/***********************************************************
// OOP244 Workshop 4: Constructors
// File Passenger.h
// Version 1.0
// Date June. 5, 2019
// Author Nilan Patel
// Student Number: <038 908 117>
// Section SEE
// Description
//
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H
// TODO: declare your namespace here
namespace sict {

	class Passenger {
		char m_pName[19];
		char m_dest[19];
	public:
		Passenger();
		Passenger(const char name[], const char destination[]);
		bool isEmpty() const;
		void display() const;
	 };
	// TODO: define the Passenger class here
}

#endif