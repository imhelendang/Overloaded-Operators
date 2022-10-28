#include "studentType.h"
#include "personType.h"

//											Constructors
studentType::studentType():personType()
{
	id = "UNKNOWN";
	gpa = 0;
	classification = "UNKNOWN";
}

//           fName, lName//
studentType::studentType(const personType *a)
{
	setfName(a->getfName());
	setlName(a->getlName());
	setAdd(a->getAdd());
	setHeight(a->getHeight());
	setDOB(a->getDOB());
	setGender(a->getGender());
	setID("UNKNOWN");
	setGPA(0);
	setClassification("UNKNOWN");
}

//Constructor with parameters
studentType::studentType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
   	   	   , double gPA, string classi, string numID)
						:personType(firstName, lastName, oneAddress, tall, birth, fM)
{
	setID(numID);
	setGPA(gPA);
	setClassification(classi);
}

studentType::~studentType()
{
    cout << this << " is being deleted!" << endl;
    setMother(NULL);
    setFather(NULL);
}

//												Setters
//Function to set GPA according to the parameters.
//Postcondition: gpa = gPA
void studentType::setGPA(double gPA)
{
	gpa = gPA;
}

//Function to set id according to the parameters.
//Postcondition: id = numID
void studentType::setID(string numID)
{
	id = numID;
}

//Function to set classification according to the parameters.
//Postcondition: classification = classi
void studentType::setClassification(string classi)
{
	classification = classi;
}

//												Getters
//Function to return the gpa.
//Postcondition: The value of gpa is returned.
double studentType::getGPA() const
{
	return gpa;
}

//Function to return the number ID.
//Postcondition: The value of id is returned.
string studentType::getID() const
{
	return id;
}

//Function to return the classification (fresh man/ junior/ senior).
//Postcondition: The value of classification is returned.
string studentType::getClassification() const
{
	return classification;
}

//											Methods
//Prints function
//Function to output the first name, last name, GPA, classification, number ID according to the form
void studentType::print() const
{
	cout << left;
	cout << "* Student:                                                                     *" << endl;
	cout << "* Full name: " << setw(20) << getfName() + " " + getlName() << setw(47) << right << "*";
	cout << left << "\n* Address: " << setw(30) << getAdd() << setw(39) << right << "*";
	cout << left << "\n* Height: " << setw(10) << getHeight() << setw(60) << right << "*";
	cout << left << "\n* Date of Birth: " << setw(20) << getDOB() << setw(43) << right << "*";
	cout << left << "\n* Gender: " << getGender() << setw(69) << right << "*";
	cout << left << "\n* Number ID:  " << setw(10) << getID() << setw(56) << right << "*";
	cout << left << "\n* GPA: " << setw(16) << getGPA() << setw(57) << right << "*";
	cout << left << "\n* Classification: " << setw(19) << getClassification() << setw(43) << right << "*";
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


