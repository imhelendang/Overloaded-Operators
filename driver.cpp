#include "personType.h"
#include "studentType.h"
#include "professorType.h"
/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A20: Operator Overloading
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 04/21/2021;
*********************************************************************************************************************
* Purpose: Purpose of this lab is to familiarize yourself with Operator Overloading
*********************************************************************************************************************
* Algorithm:
* Complete the operator overloading demo for personType to include:
* ==, >, <, !=
* >>, <<
* Create driver program that creates a dynamic array of 5 people ....
* personType *arr;
* arr = new *personType[5];
* Populate the array in a for loop, test each of your overloaded operators.
* pseudocode...
* 			for loop()
* 				{
* 				cin >> each person's data into the array of *personType
* 				}
* in a nested for loop test all of the overloaded operators.
* 			for i loop()
* 				{
* 			   cout << "Testing: " << *arr[i] << endl;
* 		    for j loop()
* 		    	{
* 		       cout << *array[i] << " < " << *array[j] << " " << (*array[i] < *array[j]) << endl;
* 			   cout << *array[i] << " > " << *array[j] << " " << (*array[i] > *array[j]) << endl;
* and so on and so on ..
* 				}
* 				}
*********************************************************************************************************************
* Sample:
*-Testing #1: Lisa
*-With Lisa
* Lisa == Lisa
*
* -With Chris
* Lisa != Chris
* Lisa < Chris
*
*-With Dennis
* Lisa != Dennis
* Lisa < Dennis
*
*-With Marilyn
* Lisa != Marilyn
* Lisa < Marilyn
*
*-With Juanita
* Lisa != Juanita
* Lisa < Juanita
*********************************************************************************************************************/


int main()
{
	system("clear");
	//Data table
	string firstName, lastName, oneAddress, birth, classi, numID, employeeId, depart, dips;
	double tall, gPA;
	char fM, discard;
	int number = 0;
	const int NO = 5;

	//Prompt the user to input the size of array then populate the array to NULL
	cout << left;
	personType **person;
	person = new personType*[NO];

	//Pupoluate array with real data
	cout << "Please input information according to the form below!" << endl;
	cout << "How many people of professorType that you want to create (from 1 to 5): ";
	cin >> number;
	cin.ignore(); 
	cout << "\nFor professorType: ";
	for (int index = 0; index < number; index++)
		{
			cout << "\nFirst Name: ";
			getline(cin, firstName);
			cout << "Last Name: ";
			getline(cin, lastName);
			cout << "Address: ";
			getline(cin, oneAddress);
			cout << "Height: ";
			cin >> tall;
			cin.ignore();
			cout << "Date of Birth: ";
			getline(cin, birth);
			cout << "Gender: ";
			cin >> fM;
			cin.ignore();
			cout << "Employee ID: ";
			getline(cin, employeeId);
			cout << "Department: ";
			getline(cin, depart);
			cout << "Degree(s): ";
			getline(cin, dips);
			person[index] = new professorType(firstName, lastName, oneAddress, tall, birth, fM, employeeId, depart, dips);
		}
		
	cout << "\nFor studentType: ";
	for(int i = number; i < NO; i++)
		{
			cout << "\nFirst Name: ";
			getline(cin, firstName);
			cout << "Last Name: ";
			getline(cin, lastName);
			cout << "Address: ";
			getline(cin, oneAddress);
			cout << "Height: ";
			cin >> tall;
			cin.ignore();
			cout << "Date of Birth: ";
			getline(cin, birth);
			cout << "Gender: ";
			cin >> fM;
			cin.ignore();
			cout << "Student ID: ";
			getline(cin, numID);
			cout << "GPA: ";
			cin >> gPA;
			cin.ignore();
			cout << "Classification (Freshman, Junior, Senior): ";
			getline(cin, classi);
			person[i] = new studentType(firstName, lastName, oneAddress, tall, birth, fM, gPA, classi, numID);
		}
	
	//Call print method
	system("clear");
	for (int i = 0; i < NO; i++)
		{
			cout << left;
			cout << "\n********************************************************************************" << endl;
			person[i]->print();
			cout << left << "\n********************************************************************************" << endl << endl;
		}

	printf("Press any key to continue..");
	cin >> discard;
	cin.ignore();
	system("clear");
	//Call overloaded operators
	for (int i = 0; i < NO; i++)
		{
			cout << "\n-Testing #" << i+1 << ": " << *person[i];
			for(int j = 0;  j < NO; j++)
			{
				cout << "\n-With " << *person[j] << endl;
				if(person[i] == NULL || person[j] == NULL)
					cout << "Error!" << endl;

				if(person[i] == person[j])
				cout << *person[i] << " == " << *person[j] << endl;

				if(person[i] != person[j])
				cout << *person[i] << " != " << *person[j] << endl;
				
				if(*person[i] > *person[j])
				cout << *person[i] << " > " << *person[j] << endl;

				if(*person[i] < *person[j])
				cout << *person[i] << " < " << *person[j] << endl;
			}
		}
	return 0;
}


