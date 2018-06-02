#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

bool reading(const char filename[], string name[], string
time[], string number[], char grade[], int hours[], int& NumC,
int HP){
	ifstream filenameA;
	filenameA.open("courses.txt");
	
	
	filenameA >> NumC;
	
	
	for (int index = 0; index < NumC; index++)
		{	
			filenameA >> name[index]; 
			filenameA >> time[index];
			filenameA >> number[index]; 
			filenameA >> grade[index]; 
			filenameA >> hours[index]; 
		}
	
	if (filenameA.fail())
		return false;
	else 
		return true;
	
// filename is course file on disk to be read
// name is an array of course names
// time is an array of semester and year a course was taken
// number is an array of course numbers
// grade is an array of letter grades
// hours is an array of credit hours
// n is the number of courses read upon return
// capacity indicates the max elements the arrays may hold
// the function returns true if file open and reading
// are successful, otherwise it returns false
// the function reads course information from the file
// and stores the information to the arrays
}

bool writing(const char filename[], const string name[],
const string time[], const string number[], const char
grade[], const int hours[], int NumC){
	
	ofstream filenameA;
	filenameA.open("courses.txt");

	filenameA << NumC << endl;
	

	for (int index = 0; index < NumC; index++)
		{	
			filenameA << name[index] << endl;
			filenameA << time[index] << endl;
			filenameA << number[index] << endl;
			filenameA << grade[index] << endl;
			filenameA << hours[index] << endl;
		}
	
	if (filenameA.fail())
		return false;
	else 
		return true;
}
// filename is course file on disk to be written
// name is an array of course names
// time is an array of semester and year a course was taken
// number is an array of course numbers
// grade is an array of letter grades
// hours is an array of credit hours
// n is the number of courses in the arrays
// the function returns true if file open and writing
// are successful, otherwise it returns false
// the function stores course information of the arrays
// to the file, similar to listing function of project 4


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
 
 const string Sscreen = "\nPlease select one of the following options :" 
			           "\nA) Calculate Total GPA for all courses" 
			           "\nB) List all courses" 
			           "\nC) Compute total credit hours for courses with a grade of D" 
			           "\nD) Compute GPA for a given semseter" 
			           "\nE) Add another course to the course list" 
			           "\nQ) Terminate program\n";
					   cout << Sscreen;
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
string name;

double totalgxh = 0.0,
	   grade_x_hours = 0.0,
	   Dhours,
	   totalhours,
	   formula;

char gradeA[PH],
     menu,
	 c;
char filename[] = "courses.txt";

// Starting Inputs
	
	cout << "Welcome to the GPA calculator v4." << endl;
	cout << "Enter y to input your courses manually or n to use a saved file :";
	cin >> c;
	if (c == 'n')
	{
	cout << "Enter y to use default file and n to use the file you provide\n";
    cin >> c;
    if (c == 'y'){
       reading(filename, Cname, Ctime, Cnumber, gradeA, hoursA, Num_of_courses, PH);
       
    } else if (c == 'n') {
       cout << "Enter you file name\n";
       cin >> name;
       reading(name.c_str(), Cname, Ctime, Cnumber, gradeA, hoursA, Num_of_courses, PH);
      
    } else 
       cout << "Wrong input\n";
	}
else if (c == 'y')
{
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
}
		C_menu();
		cin >> menu;
		
		
// Menu selection		
		while (menu != 'Q' && menu != 'q')
		{
		
			if (menu == 'A' || menu == 'a')
				formula = gpa( gradeA, hoursA, PH, Num_of_courses);
			else if (menu == 'B' || menu == 'b')
				listing( Cname,  Ctime,  Cnumber, gradeA,  hoursA,  Num_of_courses);
			else if (menu == 'C' || menu == 'c')
				Dhours = D_rule(gradeA, hoursA, PH);
			else if (menu == 'D' || menu == 'd')
				formula = semester_gpa( Ctime, gradeA, hoursA,  semesterA,  PH);
			else if (menu == 'E' || menu == 'e')
				get_course(Cname, Ctime, Cnumber, gradeA, hoursA,  PH,  Num_of_courses);
		 
			C_menu();
			cin >> menu;
			
		}
		
		writing(filename, Cname, Ctime, Cnumber, gradeA, hoursA, Num_of_courses);
		
		
		
return 0;
		
}
