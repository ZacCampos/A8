/*******************************************************************************
 * AUTHOR		: Zac Campos
 * STUDENT ID	: 1058476
 * ASSIGN #8	: Loops & Boolean Expressions
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/2/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
 * LOOPS & BOOLEAN EXPRESSIONS
 * -----------------------------------------------------------------------------
 * This program will output the number of candidates accepted and the average
 * candidates accepted.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<The input is the applicants gender, height, and weight.>
 *
 * OUTPUT:
 * 	<This program will output the number of applicants accepted and the average
 * 		candidates accepted.>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 8;
	const char LAB_NAME[]	= "Loops & Boolean Expressions";
	const int  PROMPT_COL	= 9;

	// Input and Processing variables
	bool invalid = true;
	char gender;
	int  height = 0;
	int  weight = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT -
	 **************************************************************************/

	cout << left;
	cout << "Please enter the candidates information (enter 'X' to exit).";
	cout << endl;

	do
	{
		//Gender
		cout << setw(PROMPT_COL)<< "Gender:";
		cin.get(gender);
		cin.ignore(10000, '\n');

		if(gender != 'm' || gender != 'M' || gender != 'f' || gender != 'F')
		{
			invalid = true;
		}
		else
		{
			invalid = false;
		}

		if(invalid == true)
		{
			cout << "***** Invalid gender; please enter M or F *****\n";
		}

	}while(invalid);

	do
	{
		//Height
		cout << setw(PROMPT_COL)<< "Height:";
		cin  >> (height);
		cin.ignore(10000, '\n');

		invalid = (height);

		if(invalid == true)
		{
			cout << "***** Invalid gender; please enter M or F *****\n";
		}

	}while(invalid);

	do
	{
		//Weight
		cout << "Weight:";
		cin  >> weight;
		cin.ignore(10000, '\n');
	while(invalid);




	}while(invalid);



















	/***************************************************************************
	 * PROCESSING - Calculates the user's new salary, monthly salary, and
	 * 				retroactive pay due.
	 **************************************************************************/

	/***************************************************************************
	 * OUTPUT - Outputs the user's Salary information.
	 **************************************************************************/

	return 0;
}

