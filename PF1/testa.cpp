#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Total gpa fuction
float gpa( const char grade[], int hours[], int HP, int NumC)
{	
	
	double gpv1[HP];
	double totalgxh = 0.0;
	double grade_x_hours = 0.0;
	double totalhours;
	double formula;
	
	for (int index = 0; index < HP; index++)
	{
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
			
		if (gpv1[index] == 6.)
			hours[index] = 0.0;
	}
	for (int index = 0; index < HP; index++)
		
		{
			if (NumC > index)
			{
				totalhours += hours[index];
				grade_x_hours = gpv1[index]*hours[index];
				totalgxh += grade_x_hours;
			}
		}
	
	formula = (totalgxh/totalhours);
	cout << "Your gpa is:" << setprecision(3) << formula << endl;
	return formula;
}

// Course list function
void listing(string name[], string time[], string number[],
char grade[], int hours[], int NumC)
{
	for (int index = 0; index < NumC; index++)
		{	
			cout << name[index] << endl;
			cout << time[index] << endl;
			cout << number[index] << endl;
			cout << grade[index] << endl;
			cout << hours[index] << endl;
		}
}

// D classes function
int D_rule(char grade[], int hours[], int HP)
{   
	double gpv1[HP];
	
	for (int index = 0; index < HP; index++)
	{
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
			
			
	}
	
	double Dhours = 0.0;
	for (int index = 0; index < HP; index++)
		{
			if (gpv1[index] == 1.)
			Dhours += hours[index];
		}
	
	cout << "Total hours in classes with a D is: " << Dhours << endl;
	return Dhours;
}

// Semester Gpa function
float semester_gpa(string time[],  char grade[],
int hours[], string semester, int HP)
{	
	
	getline (cin,semester);
	cout << "Enter the semester for which you would like to calculate a gpa :";
	getline (cin,semester);
	
	double totalhours = 0.0;
	double grade_x_hours = 0.0;
	double totalgxh = 0.0;
	double gpv1[HP];
	double formula = 0.0;
	
	for (int index = 0; index < HP; index++)
	{
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
				
		if (gpv1[index] == 6.)
			hours[index] = 0.0;
	}
		
		for (int index = 0; index < HP; index++)
			{
				if (semester == time[index])
					{
						totalhours += hours[index];
						grade_x_hours = gpv1[index]*hours[index];
						totalgxh += grade_x_hours;
					}
			}			
								
	formula = (totalgxh/totalhours);
	if (totalhours == 0)
		formula = 0;
	cout << "Your gpa is:" << setprecision(3) << formula << endl;
	return formula;
}

// Add course function
void get_course(string name[], string time[], string number[],
char grade[], int hours[], int HP, int &NumC)
{
	double totalhours = 0.0;
	double grade_x_hours = 0.0;
	double totalgxh = 0.0;
	double gpv1[HP];
	double formula = 0.0;
	
	if (NumC < HP)
		{	
			getline (cin,name[NumC]);
			cout << "Enter the name of course #" << (NumC +1) << ": ";
			getline (cin,name[NumC]);
			
			cout << "Enter the semseter info for course #" << (NumC +1) << ": ";
			getline (cin, time[NumC]);
				
			cout << "Enter the course number for course #" << (NumC +1) << ": ";
			getline (cin,number[NumC]);
				
					
			cout << "Enter letter grade (A,B,C,D,F,I,W) for course #" << (NumC +1) << ": ";
			cin >> grade[NumC];
					
					
			while (grade[NumC] != 'A' && grade[NumC] != 'B' && grade[NumC] != 
			'C' && grade[NumC] != 'D' && grade[NumC] != 'F'&& grade[NumC] != 
			'I'  && grade[NumC] != 'W' )
				{
					cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
					cin >> grade[NumC];
				}
					
					
					if (grade[NumC] == 'A')
						gpv1[NumC] = 4.;
					else if (grade[NumC] == 'B')
						gpv1[NumC] = 3.;
					else if (grade[NumC] == 'C')
						gpv1[NumC] = 2.;
					else if (grade[NumC] == 'D')
						gpv1[NumC] = 1.;
					else if (grade[NumC] == 'F')
						gpv1[NumC] = 0.;
					else if (grade[NumC] == 'I')
						gpv1[NumC] = 6.;
					else if (grade[NumC] == 'W')
						gpv1[NumC] = 6.;
					
					
					cout << "Enter hours for course #" << (NumC +1)<< ": ";
					cin >> hours[NumC]; 
					
					while (hours[NumC] > 5)
					{
						cout << "Incorrect value entered. Please enter 5 or less ours only.:";
						cin >> hours[NumC];
					}
				
					
				
					if (gpv1[NumC] == 6.)
						hours[NumC] = 0.0;
							 
					totalhours = 0;
					grade_x_hours = 0;
					totalgxh = 0;
					
					for (int index = 0; index <= NumC; index++)
						{
							totalhours += hours[index];
							grade_x_hours = gpv1[index]*hours[index];
							totalgxh += grade_x_hours;
						}
			NumC++;
		}
						
						
}

// Menu function
char C_menu()
{
 char choose;
 const string Sscreen = "\nPlease select one of the following options :" 
			           "\nA) Calculate Total GPA for all courses" 
			           "\nB) List all courses" 
			           "\nC) Compute total credit hours for courses with a grade of D" 
			           "\nD) Compute GPA for a given semseter" 
			           "\nE) Add another course to the course list" 
			           "\nQ) Terminate program\n";
					   cout << Sscreen;
					   cin >> choose;
					   return choose;
}

int main()
{
// Set values
const int PH = 10;

int Num_of_courses,
    hoursA[PH];

string Cname[PH];
string Cnumber[PH];
string Ctime[PH];
string semesterA;


double totalgxh = 0.0,
	   grade_x_hours = 0.0,
	   Dhours,
	   totalhours,
	   formula;

char gradeA[PH],
     menu,
	 choose;


// Starting Inputs
	
	cout << "Welcome to the GPA calculator v4." << endl;
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
			getline (cin,Cname[index]);
			cout << "Enter the name of course #" << (index +1) << ": ";
			getline (cin,Cname[index]);
		
			cout << "Enter the semseter info for course #" << (index +1) << ": ";
			getline (cin, Ctime[index]);
			
			cout << "Enter the course number for course #" << (index +1) << ": ";
			getline (cin,Cnumber[index]);
			
			
			cout << "Enter letter grade (A,B,C,D,F,I,W) for course #" << (index +1) << ": ";
			cin >> gradeA[index];
			while (gradeA[index] != 'A' && gradeA[index] != 'B' && gradeA[index] != 'C' && gradeA[index] != 
			'D' && gradeA[index] != 'F'&& gradeA[index] != 'I'  && gradeA[index] != 'W' )
			{
				cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
				cin >> gradeA[index];
			}
			
			cout << "Enter hours for course #" << (index +1)<< ": ";
			cin >> hoursA[index]; 
			
			while (hoursA[index] > 5)
			{
				cout << "Incorrect value entered. Please enter 5 or less ours only.:";
				cin >> hoursA[index];
			}
		
			
				
		}
			
			
	}
		
		C_menu();
		
		
// Menu selection		
		while (choose != 'Q' && choose != 'q')
		{
			choose = C_menu();
			if (choose == 'A' || choose == 'a')
				formula = gpa( gradeA, hoursA, PH, Num_of_courses);
			else if (choose == 'B' || choose == 'b')
				listing( Cname,  Ctime,  Cnumber, gradeA,  hoursA,  Num_of_courses);
			else if (choose == 'C' || choose == 'c')
				Dhours = D_rule(gradeA, hoursA, PH);
			else if (choose == 'D' || choose == 'd')
				formula = semester_gpa( Ctime, gradeA, hoursA,  semesterA,  PH);
			else if (choose == 'E' || choose == 'e')
				get_course(Cname, Ctime, Cnumber, gradeA, hoursA,  PH,  Num_of_courses);
		 
			
			
		
		
		}
		
		
		
		
		
return 0;
		
}
