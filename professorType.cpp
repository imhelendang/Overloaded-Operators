#include "professorType.h"
#include "personType.h"

//											Constructors
professorType::professorType():personType()
{
	eID = "UNKNOWN";
	dp = "UNKNOWN";
	degree = "UNKNOWN";
}

professorType::professorType(const personType *b)
{
	setfName(b->getfName());
	setlName(b->getlName());
	setAdd(b->getAdd());
	setHeight(b->getHeight());
	setDOB(b->getDOB());
	setGender(b->getGender());
	setEID("UNKNOWN");
	setDP("UNKNOWN");
	setDegree("UNKNOWN");
}

//Constructor with parameters
professorType::professorType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
   	   	   ,  string employeeID, string depart, string dips)
						:personType(firstName, lastName, oneAddress, tall, birth, fM)
{
	setEID(employeeID);
	setDP(depart);
	setDegree(dips);
}

professorType::~professorType()
{
    cout << this << " is being deleted!" << endl;
    setMother(NULL);
    setFather(NULL);
}

//												Setters
//Function to set employee ID according to the parameters.
//Postcondition: eID = employeeID
void professorType::setEID(string employeeID)
{
	eID = employeeID;
}

//Function to set name of department according to the parameters.
//Postcondition: dp = depart
void professorType::setDP(string depart)
{
	dp = depart;
}

//Function to set name of degrees according to the parameters.
//Postcondition: degree = dips
void professorType::setDegree(string dips)
{
	degree = dips;
}

//												Getters
//Function to return the employee ID.
//Postcondition: The value of eID is returned.
string professorType::getEID() const
{
	return eID;
}

//Function to return the name of department.
//Postcondition: The value of dp is returned.
string professorType::getDP() const
{
	return dp;
}

//Function to return the name of degree(s).
//Postcondition: The value of degree is returned.
string professorType::getDegree() const
{
	return degree;
}

//											Methods
//Prints function
//Function to output the first name, last name, address, height, dob, gender, employeeID, department, degree
void professorType::print() const
{
	cout << left;
	cout << "* Professor:                                                                   *" << endl;
	cout << "* Full name: " << setw(20) << getfName() + " " + getlName() << setw(47) << right << "*";
	cout << left << "\n* Address: " << setw(30) << getAdd() << setw(39) << right << "*";
	cout << left << "\n* Height: " << setw(10) << getHeight() << setw(60) << right << "*";
	cout << left << "\n* Date of Birth: " << setw(20) << getDOB() << setw(43) << right << "*";
	cout << left << "\n* Gender: " << getGender() << setw(69) << right << "*";
	cout << left << "\n* Number ID:  " << setw(10) << getEID() << setw(56) << right << "*";
	cout << left << "\n* Department: " << setw(29) << getDP() << setw(37) << right << "*";
	cout << left << "\n* Degree(s): " << setw(24) << getDegree() << setw(43) << right << "*";
	cout << left << "\n*" << setw(79) << right << "*";
	if(getMother() == NULL)
	{
		cout << left << "\n* Mother: UNKNOWN                                                              *";
	}
	else
	{
		cout << left << "\n* Mother:                                                                      *" << endl;
		getMother()->print();
	}

	cout << left << "\n*" << setw(79) << right << "*";
	if(getFather() == NULL)
	{
		cout << left << "\n* Father: UNKNOWN                                                              *";
	}
	else
	{
		cout << left << "\n* Father:                                                                      *" << endl;
		getFather()->print();
	}
}

//Equals function
bool professorType::equals(string type) const
{
	bool set = false;
	return set;
}
