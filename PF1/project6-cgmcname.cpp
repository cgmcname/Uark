#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


class Course_taken 
{
	public:
	Course_taken(); // default constructor
	
	void get(string& name, string& time, string& number, char& g,
	int& h) const;
	
	void set(string name, string time, string number, char g,
	int h);
	
	void print() const;
	
	private:
	string course_name;
	string course_time;
	string course_number;
	char grade;
	int hours;
};

Course_taken::Course_taken()
{
	course_name = "Programming foundations I";
	course_time = "Fall 2015";
	course_number = "CSCE 2004";
	grade = 'A';
	hours = 4;
}

void Course_taken::get(string& name, string& time, string& number, char& g,
int& h) const 
{
	name = course_name;
	time = course_time;
	number = course_number;
	g = grade;
	h = hours;
}


void Course_taken::set(string name, string time, string number, char g,
int h)
{
	course_name = name ;
	course_time = time ;
	course_number = number ;
	grade = g ;
	hours = h;
}

void Course_taken::print() const
{
	cout << course_name << endl << course_time << endl << 
	course_number << endl << grade << endl << hours << endl;
}


char C_menu()
{
 char choose;
 const string Sscreen = "\nPlease select one of the following options :" 
			            "\nA) Calculate Total GPA for all courses" 
			            "\nB) List all courses" 
			            "\nC) Compute total credit hours for courses with a grade of D" 
			            "\nD) Compute GPA for a given semseter" 
			            "\nE) Add another course to the course list"
					    "\nF) Delete a course"
			            "\nQ) Terminate program\n";
					   cout << Sscreen;
					   cin >> choose;
					   return choose;
}

int main()
{
// Set values
const int PH = 50;

int Num_of_courses,
	hoursA;

int Qhours;
	
string Cname;
string Cnumber;
string Ctime;
string semester;
string Qname;
string Qnumber;
string Qtime;
string name;


double Dhours = 0.0 ,
	   formula;
double gpv1;
double totalgxh = 0.0;
double grade_x_hours = 0.0;
double totalhours = 0.0;


char gradeA,
     menu,
	 Qg,
	 c;

char filename[] = "courses.txt";
char filename2[] = "BSCSrequirements.txt";
char filename3[] = "checking.txt";

Course_taken course1[PH];

// Starting Inputs
	
	cout << "Welcome to the GPA calculator v6." << endl;
	cout << "Enter m to input your courses manually or s to use a saved file :";
	cin >> c;
	
	if (c == 's')
	{
		cout << "Enter d to use default file or f to use the file you provide\n";
		cin >> c;
    
		if (c == 'd')
			{
				ifstream filenameA;
				filenameA.open(filename);
	
				filenameA >> Num_of_courses;
	
				for (int index = 0; index < Num_of_courses; index++)
				{	
					getline (filenameA, Cname);
					 
					getline (filenameA, Cname);
					
					getline (filenameA, Ctime);
					
					getline (filenameA, Cnumber);
					
					filenameA.get(gradeA);
					filenameA >> hoursA; 
					Qname = Cname ;
					Qtime = Ctime ;
					Qnumber = Cnumber;
					Qg = gradeA;
					Qhours = hoursA ;
					course1[index].set(Qname, Qtime, Qnumber, Qg, Qhours);
				}
	
				filenameA.close();
				
			} 
		else if (c == 'f') 
			{	
				getline (cin, name);
				cout << "Enter your file name\n";
				getline (cin, name);
				
				ifstream filenameA;
				filenameA.open(name.c_str());
	
				filenameA >> Num_of_courses;
	
				for (int index = 0; index < Num_of_courses; index++)
				{	
					filenameA >> Cname; 
					filenameA >> Ctime;
					filenameA >> Cnumber; 
					filenameA >> gradeA; 
					filenameA >> hoursA; 
					Qname = Cname ;
					Qtime = Ctime ;
					Qnumber = Cnumber;
					Qg = gradeA;
					Qhours = hoursA ;
					course1[index].set(Qname, Qtime, Qnumber, Qg, Qhours);
				}
	
				filenameA.close();
			} 
		else 
			cout << "Wrong input\n";
	}
	
	else if (c == 'm')
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
				getline (cin,Cname);
				cout << "Enter the name of course #" << (index +1) << ": ";
				getline (cin,Cname);
		
				cout << "Enter the semester info for course #" << (index +1) << ": ";
				getline (cin, Ctime);
			
				cout << "Enter the course number for course #" << (index +1) << ": ";
				getline (cin,Cnumber);
			
			
				cout << "Enter letter grade (A,B,C,D,F,I,W) for course #" << (index +1) << ": ";
				cin >> gradeA;
				while (gradeA != 'A' && gradeA != 'B' && gradeA != 'C' && gradeA != 
				'D' && gradeA != 'F'&& gradeA != 'I'  && gradeA != 'W' )
				{
					cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
					cin >> gradeA;
				}
			
				cout << "Enter hours for course #" << (index +1)<< ": ";
				cin >> hoursA; 
			
				while (hoursA > 5)
				{
					cout << "Incorrect value entered. Please enter 5 or less ours only.:";
					cin >> hoursA;
				}
				
			}
			
				Qname = Cname ;
			    Qtime = Ctime ;
				Qnumber = Cnumber;
				Qg = gradeA;
				Qhours = hoursA ;
				course1[index].set(Qname, Qtime, Qnumber, Qg, Qhours);
				
		}
		
	}

//Menu feature		
	while (menu != 'Q' && menu != 'q')
		{
			menu = C_menu();

// Gpa calculator			
			if (menu == 'A' || menu == 'a')
			{
				 totalhours = 0.0;
				 grade_x_hours = 0.0;
				 totalgxh = 0.0;
				 formula = 0.0;	
				
				for (int index = 0; index < Num_of_courses; index++)
				{
					course1[index].get(Qname, Qtime, Qnumber, Qg, Qhours);
				
					if (Qg == 'A')
					gpv1 = 4.;
					else if (Qg == 'B')
					gpv1 = 3.;
					else if (Qg == 'C')
					gpv1 = 2.;
					else if (Qg == 'D')
					gpv1 = 1.;
					else if (Qg == 'F')
					gpv1 = 0.;
					else if (Qg == 'I')
					gpv1 = 6.;
					else if (Qg == 'W')
					gpv1 = 6.;
			
					if (gpv1 == 6.)
					Qhours = 0.0;
				
	
	
					totalhours += Qhours;
					grade_x_hours = gpv1*Qhours;
					totalgxh += grade_x_hours;
				}
	
				formula = (totalgxh/totalhours);
				cout << "Your gpa is:" << setprecision(3) <<  formula << endl;
			}

// List courses			
			else if (menu == 'B' || menu == 'b')
			{
				for (int index = 0; index < Num_of_courses; index++)
				course1[index].print();
			}
			

// Class with D			
			else if (menu == 'C' || menu == 'c')
			{
				for (int index = 0; index < Num_of_courses; index++)
				{
					course1[index].get(Qname, Qtime, Qnumber, Qg, Qhours);
					if (Qg == 'd' || Qg == 'D')
					Dhours += Qhours;
				}
	
				cout << "Total hours in classes with a D is: " << Dhours << endl;
				Dhours = 0.0;
			}	

//Semester calculator			
			else if (menu == 'D' || menu == 'd')
			{
				getline (cin,semester);
				cout << "Enter the semester for which you would like to calculate a gpa :";
				getline (cin,semester);
				
				 totalhours = 0.0;
				 grade_x_hours = 0.0;
				 totalgxh = 0.0;
				 formula = 0.0;
				
				for (int index = 0; index < Num_of_courses; index++)
				{
					course1[index].get(Qname, Qtime, Qnumber, Qg, Qhours);
					
					if (Qg == 'A')
					gpv1 = 4.;
					else if (Qg == 'B')
					gpv1 = 3.;
					else if (Qg == 'C')
					gpv1 = 2.;
					else if (Qg == 'D')
				    gpv1 = 1.;
					else if (Qg == 'F')
					gpv1 = 0.;
					else if (Qg == 'I')
					gpv1 = 6.;
					else if (Qg == 'W')
					gpv1 = 6.;
							
					if (gpv1 == 6.)
						Qhours = 0.0;
					
					if (semester == Qtime)
						{
							totalhours += Qhours;
							grade_x_hours = gpv1*Qhours;
							totalgxh += grade_x_hours;
						}
	            }
		
					
				formula = (totalgxh/totalhours);
	
				if (totalhours == 0.0)
				formula = 0.0;
				
				cout << "Your gpa is:" << setprecision(3) << formula << endl;
			
		    }

// Add course
			else if (menu == 'E' || menu == 'e')
			{
				 totalhours = 0.0;
				 grade_x_hours = 0.0;
				 totalgxh = 0.0;
				 
				
				if (Num_of_courses < PH)
					{	
						getline (cin,Cname);
						cout << "Enter the name of course #" << (Num_of_courses +1) << ": ";
						getline (cin,Cname);
						
						cout << "Enter the semester info for course #" << (Num_of_courses +1) << ": ";
						getline (cin, Ctime);
							
						cout << "Enter the course number for course #" << (Num_of_courses +1) << ": ";
						getline (cin,Cnumber);
							
								
						cout << "Enter letter grade (A,B,C,D,F,I,W) for course #" << (Num_of_courses +1) << ": ";
						cin >> gradeA;
								
								
						while (gradeA != 'A' && gradeA != 'B' && gradeA != 
						'C' && gradeA != 'D' && gradeA != 'F'&& gradeA != 
						'I'  && gradeA != 'W' )
							{
								cout << "Incorrect value entered. Please enter (A,B,C,D,F,I,W) only. :";
								cin >> gradeA;
							}
								
								
								
								
								
								cout << "Enter hours for course #" << (Num_of_courses +1)<< ": ";
								cin >> hoursA; 
								
								while (hoursA > 5)
								{
									cout << "Incorrect value entered. Please enter 5 or less ours only.:";
									cin >> hoursA;
								}
							
								
							
								if (gpv1 == 6.)
									hoursA = 0.0;
										 
							Qname = Cname ;
							Qtime = Ctime ;
							Qnumber = Cnumber;
							Qg = gradeA;
							Qhours = hoursA ;
							course1[Num_of_courses].set(Qname, Qtime, Qnumber, Qg, Qhours);
								
								
						Num_of_courses++;
			
					}
			}
// course delete
			else if (menu == 'f' || menu == 'F')
			{
				int where;
				string Dcourse;
				getline (cin, Dcourse);
				cout << "What course would you like to delete: " << endl;
				getline (cin, Dcourse);
	
				for (int i = 0; i <= Num_of_courses; i++)
				{
					course1[i].get(Qname, Qtime, Qnumber, Qg, Qhours);
					
					if (Qname == Dcourse )
					{
					 where = i;
					 course1[Num_of_courses-1].get(Qname, Qtime, Qnumber, Qg, Qhours); 
					 course1[where].set(Qname, Qtime, Qnumber, Qg, Qhours);
					 Num_of_courses--;
					}
					
				}	
					
			}
			
			
		}//	menu while
		cout << "Would you like to read and store requirements to checking.txt (y/n)?: " << endl;
		cin >> c;
		if (c == 'y')
		{
		
			ifstream filenameB;
			filenameB.open(filename2);
			string output;
			string test[300];
			
			for (int i = 0; i < 300; i++)
			{
				getline (filenameB, output);
				test[i] = output.c_str();
			}
			filenameB.close();
			
			
			
			ofstream filenameC;
			filenameC.open(filename3);
			
			for (int i = 0; i < 200; i++)
			{
				
				filenameC << test[i] << endl;
			}
			filenameC.close();
		}
		
// writing feature			
		cout << "Would you like to save your results to course.txt (y/n)?: " << endl;
		cin >> c;
		if (c == 'y')
		{
			ofstream filenameA;
			filenameA.open("courses.txt");

			filenameA << Num_of_courses << endl;
	
			for (int index = 0; index < Num_of_courses; index++)
			{	
				course1[index].get(Qname, Qtime, Qnumber, Qg, Qhours);
				Cname = Qname;
				Ctime = Qtime;
				Cnumber = Qnumber;
				gradeA = Qg;
				hoursA = Qhours;
				filenameA << Cname << endl;
				filenameA << Ctime << endl;
				filenameA << Cnumber << endl;
				filenameA << gradeA << endl;
				filenameA << hoursA << endl;
			}
	
				filenameA.close();
		}
			else if (c != 'y')
				return 0;
		
	   return 0;
}
