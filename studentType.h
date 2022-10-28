#ifndef STUDENTTYPE_H_
#define STUDENTTYPE_H_
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "personType.h"

class studentType: public personType
{
public:
   //constructors
   studentType();

   //           fName, lName//
   studentType(const personType *a);

   //Constructor with paramters
   studentType(string firstName, string lastName, string oneAddress, double tall, string birth, char fM
		   	   	   	   , double gPA, string classi, string numID);

   //Destructor
   ~studentType();


   //setters
   void setGPA(double);
   void setID(string);
   void setClassification(string);

   //getters
   double getGPA() const;
   string getID() const;
   string getClassification() const;

   void print() const; //print method

private:
   string id; //added every id 'should' be unique
   double gpa;
   string classification;

};
#endif /* STUDENTTYPE_H_ */

