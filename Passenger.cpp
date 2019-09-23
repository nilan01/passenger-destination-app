/***********************************************************
// OOP244 Workshop 4: Constructors
// File Passenger.cpp
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

// TODO: add your headers here
#include <iostream>
#include "Passenger.h"
#include <cstring>
using namespace std;

// TODO: continue your namespace here
namespace sict {
	int size = 19;
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		m_pName[0] = '\0';
		m_dest[0] = '\0';
	}
// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char name[], const char destination[]) {
		if (name != '\0' && destination != '\0') {
			strncpy(m_pName, name, size);
			m_pName[size - 1] = '\0';
			strncpy(m_dest, destination, size);
			m_dest[size - 1] = '\0';
		}
		else {
			*this = Passenger();
		}
	}
// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		if (m_pName[0] == '\0' || m_dest[0] == '\0') {
			return true;
		}
		else {
			return false;
		}
	}
// TODO: implement display query here
	void Passenger::display() const {
		if (this->isEmpty() == true) {
			cout << "No passenger!" << endl;
		}
		else {
			cout << this->m_pName << " - " << this->m_dest << endl;
		}
	}

}


