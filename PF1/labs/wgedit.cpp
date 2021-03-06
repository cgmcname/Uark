#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
// Set values
int Num_of_courses;

string coursename;
string coursenum;

char grade;

double coursehours,
	   gpv1,
	   totalgxh = 0.0,
	   totalhours,
	   grade_x_hours = 0.0,
	   formula;
	   
	   
// beginning input
	cout << "Welcome to the GPA calculator v2." << endl;
	cout << "Please enter total number of courses you wish to calculate :";
	cin >> Num_of_courses;
			while (Num_of_courses == 0)
			{
			cout << "You must enter value greater than 0." << endl;
			cout << "Please enter total courses :";
			cin >> Num_of_courses;
			}
	cin.ignore();
	
	
//menu and loop for values

	for (int x = 1; x <= Num_of_courses; x++)
	{
		
		cout << "Enter course #" << x <<"'s name: ";
		getline (cin, coursename);
		
		cout << "Enter the course number for course #" << x <<" :";
		getline (cin, coursenum);
		
		cout << "Enter letter grade (A,B,C,D,F,I,W) for course #" << x <<" :";
		cin >> grade;
	
	//error check for grade
	
		while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F'&& grade != 'I'  && grade != 'W' )
		{
			cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
			cin >> grade;
				}
			
			if (grade == 'A')
				gpv1 = 4.;
			else if (grade == 'B')
				gpv1 = 3.;
			else if (grade == 'C')
				gpv1 = 2.;
			else if (grade == 'D')
				gpv1 = 1.;
			else if (grade == 'F')
				gpv1 = 0.;
			else if (grade == 'I')
				gpv1 = 6.;
			else if (grade == 'W')
				gpv1 = 6.;
			
		cin.ignore();
		
		
		cout << "Enter number of hours in course #" << x <<":";
		cin >> coursehours;
		
// error check for hours
		while (coursehours > 5)
		{
		cout << "Incorrect value entered. Please enter 5 or less ours only.:";
		cin >> coursehours;
		}
		
		cin.ignore();
		
		if (gpv1 == 6.)
			coursehours = 0.0;
		
	//loop accumulaters
	
		totalhours += coursehours;
		grade_x_hours = (gpv1 * coursehours);
		totalgxh += grade_x_hours;
	}
	
	//calculation of inputs
	
		formula = (totalgxh/totalhours);
		
		cout << "Your gpa is:" << setprecision(3) << formula << endl;
		
	return 0;
}
