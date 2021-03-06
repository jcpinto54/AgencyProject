#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "defs.h"
#include "Address.h"

using namespace std;

class Client {
private:
	string name; // name of the client
	string VATnumber; // VAT number of client
	string familySize;  // number of family members
	Address address = Address(); // client's address
	vector<string> id_packs; // vector to store client's packets bought
	string moneySpent;

public:
	Client();
	Client(string name, string VATnumber, string familySize, Address address, vector<string> id_packs, string moneySpent);  // for a new client

	// GET methods

	string getName() const;
	string getVATnumber() const;
	string getFamilySize() const;
	Address getAddress() const;
	vector<string> getPacketList() const;
	string getMoneySpent() const;

	// SET methods

	void setName(string name);
	void setVATnumber(string VATnumber);
	void setFamilySize(string familySize);
	void setAddress(Address address);
	void setPacketList(vector<string> id_packs);
	void setMoneySpent(string moneySpent);
};
