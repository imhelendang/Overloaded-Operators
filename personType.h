#ifndef PERSONTYPE_H_
#define PERSONTYPE_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class personType
{
private:
	string fName;
	string lName;
	string address;
	double height;
	string dOB;
	char gender;
	personType *mother;
	personType *father;
public:
	personType();		//Default constructor
	personType(string, string ,string, double, string , char);		//Constructor with parameters
	virtual ~personType() {}; 		//Destructor - NOTE: need to initialize
    //otherwise got error: "a missing vtable usually means the first non-inline virtual member function has no definition.""

	//Setters
	void setfName(string);
	void setlName(string);
	void setAdd(string);
	void setHeight(double);
	void setDOB(string);
	void setGender(char);
	void setMother(personType *);
	void setFather(personType *);

	//Getters
	string getfName() const;
	string getlName() const;
	string getAdd() const;
	double getHeight() const;
	string getDOB() const;
	char getGender() const;
	personType* getMother() const;
	personType* getFather() const;


	//Print function - pure virtual function
	virtual void print() const = 0;

	//Overloaded operators
	bool operator==(const personType *other) const;
	bool operator!=(const personType& other) const;
	bool operator>(const personType& other) const;
	bool operator<(const personType& other) const;

	//Friend functions
	friend ostream& operator<<(ostream&, const personType&);
	friend istream& operator>>(istream&, personType&);
};
#endif /* PERSONTYPE_H_ */
