#include "personType.h"
//													Setters
//Function to set fName according to the parameters.
//Postcondition: firstName = firstName
void personType::setfName(string firstName)
{
	fName = firstName;
	return;
}

//Function to set lName according to the parameters.
//Postcondition: lName = lastName
void personType::setlName(string lastName)
{
	lName = lastName;
	return;
}

//Function to set address according to the parameters.
//Postcondition: address = oneAddress
void personType::setAdd(string oneAddress)
{
	address = oneAddress;
	return;
}

//Function to set height according to the parameters.
//Postcondition: height = tall
void personType::setHeight(double tall)
{
	if (tall >= 0)
		height = tall;
	else
		height = 0;
	return;
}

//Function to set dOB according to the parameters.
//Postcondition: dOB = birht
void personType::setDOB(string birth)
{
	dOB = birth;
	return;
}

//Function to set gender according to the parameters.
//Postcondition: gender = fM
void personType::setGender(char fM)
{
	gender = fM;
	return;
}

//Function to set mother according to the parameters.
//Postcondition: mother = mom
void personType::setMother(personType *mom)
{
	mother = mom;
	return;
}

//Function to set father according to the parameters.
//Postcondition: father = dad
void personType::setFather(personType *dad)
{
	father = dad;
	return;
}


//													Getters
//Default constructor
personType::personType()
{
	setfName("UNKNWON");
	setlName("UNKNWON");
	setAdd("UNKNWON, UNKNWON");
	setHeight(00);
	setDOB("UNKNWON 00, 0000");
	setGender('X');
    setMother(NULL);
    setFather(NULL);
}

//Constructor with parameters
personType::personType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM)
{
	setfName(firstName);
	setlName(lastName);
	setAdd(oneAddress);
	setHeight(tall);
	setDOB(birth);
	setGender(fM);
    setMother(NULL);
    setFather(NULL);
}


//Function to return the first name.
//Postcondition: The value of fName is returned.
string personType::getfName() const
{
	return fName;
}

//Function to return the last name.
//Postcondition: The value of lName is returned.
string personType::getlName() const
{
	return lName;
}

//Function to return the address.
//Postcondition: The value of address is returned.
string personType::getAdd() const
{
	return address;
}

//Function to return the height.
//Postcondition: The value of height is returned.
double  personType::getHeight() const
{
	return height;
}

//Function to return the date of birth.
//Postcondition: The value of dOB is returned.
string  personType::getDOB() const
{
	return dOB;
}

//Function to return the gender.
//Postcondition: The value of gender is returned.
char  personType::getGender() const
{
	return gender;
}

//Function to return value of mother.
//Postcondition: The value of mother is returned.
personType* personType::getMother() const
{
	return mother;
}

//Function to return value of father.
//Postcondition: The value of father is returned.
personType* personType::getFather() const
{
	return father;
}

//Print method
//Postcondition: print out the information as the form below
/*void personType::print() const
{
	cout << left;
	cout << "* Full name: " << setw(20) << getfName() + " " + getlName() << setw(47) << right << "*";
	cout << left << "\n* Address: " << setw(30) << getAdd() << setw(39) << right << "*";
	cout << left << "\n* Height: " << setw(10) << getHeight() << setw(60) << right << "*";
	cout << left << "\n* Date of Birth: " << setw(20) << getDOB() << setw(43) << right << "*";
	cout << left << "\n* Gender: " << getGender() << setw(69) << right << "*";
}*/

//					Overloaded operators
//Function compare the object whether they are the same
//Postcondition: will return 0 if the varibale (fName) are identical
//				 otherwise, return 1
bool personType::operator==(const personType *other) const
{
	return(getfName() == other->getfName());
}

//Function compare the object whether they are the same
//Postcondition: will return 0 if the varibale (fName) are different
//				 otherwise, return 1 
bool personType::operator!=(const personType& other) const
{
	return(getfName() != other.getfName());
}

//Function compare the object whether they are the same
//Postcondition: will return 0 if one varibale (fName) is greater than the other
//				 otherwise, return 1
bool personType::operator>(const personType& other) const
{
	return(getfName() > other.getfName());
}

//Function compare the object whether they are the same
//Postcondition: will return 0 if one varibale (fName) is less than the other
//				 otherwise, return 1
bool personType::operator<(const personType& other) const
{
	return(getfName() < other.getfName());
}

//Overload the stream extraction operators
ostream& operator<<(ostream& osObject, const personType& other)
{
	//local declaration, if any
	//Output the members of cObject.
	//osObject << . . .
	//Return the stream object.
	cout << other.getfName();
	return osObject;
}

//Overload the stream insertion operators
istream& operator>>(istream& isObject, personType& other)
{
	//local declaration, if any
	//Read the data into cObject.
	//isObject >> . . .
	//Return the stream object.
	
	return isObject;
}





