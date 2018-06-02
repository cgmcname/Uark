#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
// Set values
const int PH = 10;
int Num_of_courses;



string coursename[PH];
string coursenum[PH];
string semseterA[PH];

const string Sscreen = "\nPlease select one of the following options :" 
			           "\nA) Calculate Total GPA for all courses" 
			           "\nB) List all courses" 
			           "\nC) Compute total credit hours for courses with a grade of D" 
			           "\nD) Compute GPA for a given semseter" 
			           "\nE) Add another course to the course list" 
			           "\nQ) Terminate program\n"; 
			

double totalgxh = 0.0,
	   grade_x_hours = 0.0,
	   Dhours,
	   totalhours,
	   formula;

char grade[PH];
double gpv1[PH];
int hours[PH];
char menu;


cout << "Welcome to the GPA calculator v3." << endl;
	cout << "Please enter total number of courses you wish to calculate :";
	cin >> Num_of_courses;
	
			while (Num_of_courses == 0 && Num_of_courses > 10 )
			{
			cout << "You must enter value greater than 0 and less than or equal to 10." << endl;
			cout << "Please enter total courses :";
			cin >> Num_of_courses;
			}

	for (int index = 0; index < PH; index++)
		
	{
			if (Num_of_courses > index)
		{	
			getline (cin,coursename[index]);
			cout << "Enter the name of course #" << (index +1) << ": ";
			getline (cin,coursename[index]);
		
			cout << "Enter the semseter info for course #" << (index +1) << ": ";
			getline (cin, semseterA[index]);
			
			cout << "Enter the course number for course #" << (index +1) << ": ";
			getline (cin,coursenum[index]);
			
			
			cout << "Enter letter grade for course #" << (index +1) << ": ";
			cin >> grade[index];
			while (grade[index] != 'A' && grade[index] != 'B' && grade[index] != 'C' && grade[index] != 'D' && grade[index] != 'F'&& grade[index] != 'I'  && grade[index] != 'W' )
				{
			cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
			cin >> grade[index];
				}
			if (grade[index] == 'A')
				gpv1[index] = 4.;
			else if (grade[index] == 'B')
				gpv1[index] = 3.;
			else if (grade[index] == 'C')
				gpv1[index] = 2.;
			else if (grade[index] == 'D')
				gpv1[index] = 1.;
			else if (grade[index] == 'F')
				gpv1[index] = 0.;
			else if (grade[index] == 'I')
				gpv1[index] = 6.;
			else if (grade[index] == 'W')
				gpv1[index] = 6.;
			cout << "Enter hours for course #" << (index +1)<< ": ";
			cin >> hours[index]; 
			
			while (hours[index] > 5)
			{
			cout << "Incorrect value entered. Please enter 5 or less ours only.:";
			cin >> hours[index];
			}
		
			if (gpv1[index] == 1.)
			Dhours += hours[index];
		
			if (gpv1[index] == 6.)
			hours[index] = 0.0;
				
					
					
			
		
			
		}
			
			
	}
	


	
	for (int index = 0; index < PH; index++)
		
		{
			if (Num_of_courses > index)
			{
			
			totalhours += hours[index];
			grade_x_hours = gpv1[index]*hours[index];
			totalgxh += grade_x_hours;
			}
		}
					
	cout << Sscreen;
	cin >> menu;
	
	
	while (menu != 'Q' && menu != 'q')
	{
		if (menu == 'A' || menu == 'a')
			{
					
				formula = (totalgxh/totalhours);
				cout << "Your gpa is:" << setprecision(3) << formula << endl;
			}	
		else if (menu == 'B' || menu == 'b')
		{
			for (int index = 0; index < Num_of_courses; index++)
			{	
			cout << coursename[index] << endl;
			cout << semseterA[index] << endl;
			cout << coursenum[index] << endl;
			cout << grade[index] << endl;
			cout << hours[index] << endl;
			}
		}
			
			
		else if (menu == 'C' || menu == 'c')
			cout << "Total hours in classes with a D is: " << Dhours << endl;
		
		else if (menu == 'D' || menu == 'd')
			cout << "Sorry wish I knew how to do it" << endl;
		
		else if (menu == 'E' || menu == 'e')
		{
		  
				if (Num_of_courses < PH)
					{	
					getline (cin,coursename[Num_of_courses]);
					cout << "Enter the name of course #" << (Num_of_courses +1) << ": ";
					getline (cin,coursename[Num_of_courses]);
			
					cout << "Enter the semseter info for course #" << (Num_of_courses +1) << ": ";
					getline (cin, semseterA[Num_of_courses]);
				
					cout << "Enter the course number for course #" << (Num_of_courses +1) << ": ";
					getline (cin,coursenum[Num_of_courses]);
				
					
					cout << "Enter letter grade for course #" << (Num_of_courses +1) << ": ";
					cin >> grade[Num_of_courses];
					
					
					while (grade[Num_of_courses] != 'A' && grade[Num_of_courses] != 'B' && grade[Num_of_courses] != 'C' && grade[Num_of_courses] != 'D' 
					&& grade[Num_of_courses] != 'F'&& grade[Num_of_courses] != 'I'  && grade[Num_of_courses] != 'W' )
					{
					cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
					cin >> grade[Num_of_courses];
					}
					
					
					if (grade[Num_of_courses] == 'A')
						gpv1[Num_of_courses] = 4.;
					else if (grade[Num_of_courses] == 'B')
						gpv1[Num_of_courses] = 3.;
					else if (grade[Num_of_courses] == 'C')
						gpv1[Num_of_courses] = 2.;
					else if (grade[Num_of_courses] == 'D')
						gpv1[Num_of_courses] = 1.;
					else if (grade[Num_of_courses] == 'F')
						gpv1[Num_of_courses] = 0.;
					else if (grade[Num_of_courses] == 'I')
						gpv1[Num_of_courses] = 6.;
					else if (grade[Num_of_courses] == 'W')
						gpv1[Num_of_courses] = 6.;
					
					
					cout << "Enter hours for course #" << (Num_of_courses +1)<< ": ";
					cin >> hours[Num_of_courses]; 
					
					while (hours[Num_of_courses] > 5)
					{
					cout << "Incorrect value entered. Please enter 5 or less ours only.:";
					cin >> hours[Num_of_courses];
					}
				
					
				
					if (gpv1[Num_of_courses] == 6.)
						hours[Num_of_courses] = 0.0;
							 
							 
					for (int index = 0; index <= Num_of_courses; index++)
						{
						totalhours += hours[index];
						grade_x_hours = gpv1[index]*hours[index];
						totalgxh += grade_x_hours;
						}
						
						
						
					}
						Num_of_courses++;
						
		}
				
				
				
		


		cout << Sscreen;
		cin >> menu;	
			
	}
		
	
	
		
	
		return 0;

}

