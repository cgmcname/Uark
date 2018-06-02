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
	grade = 'F';
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

class Req {
public:
    Req();
    ~Req();
    void get(string& i, int& j) const;
    int get_y() const;
    string get_x() const;
    void set(string i, int j);
    void show() const;
private:
    string x;
    int y;
    //void set(int i, int j);
};

Req::Req(){
    x = "CSCE 2001";
    y =3;
    //cout << "calling default constructor\n";
}

Req::~Req(){
    //cout << "calling destructor\n";
}

void Req::get(string& i, int& j) const {
    i = x;
    j = y;
}

int Req::get_y() const {
    return y;
}

string Req::get_x() const {
    return x;
}

void Req::set(string i, int j){
    x = i;
    y = j;
}

void Req::show() const{
    cout << x << "," << y << endl;
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
						"\nR) Check requirements"
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

int Qhours,
	placeholder = 0;

int Ereq = 6;
int FAreq = 3;
int Matreq = 3;
int Scireq = 8;
int Humreq = 3; 
int SSreq = 9;
int USreq = 3;

	
string Cname;
string Cnumber;
string Ctime;
string semester;
string Qname;
string Qnumber;
string Qtime;
string name;
string ClassNum[PH];

string newtest[300];
string newtest1[300];
string newtest2[300];
string newtest3[300];
string newtest4[300];
string newtest5[300];
string newtest6[300];


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
Req Reqlist[PH];

// Starting Inputs
	
	cout << "Welcome to the GPA calculator v7." << endl;
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
// distict list 
			else if (menu == 'r' || menu == 'R')
			{
				for (int i = 0; i < Num_of_courses; i++)
				{
					course1[i].get(Qname, Qtime, Qnumber, Qg, Qhours);
					
					if (Qg == 'A' || Qg == 'B' || Qg == 'C' || Qg == 'D')
					{
						ClassNum[i] = Qnumber;
						
					}
				}
				
				ifstream filenameB;
				filenameB.open(filename2);
				string output;
				string test[300];
				
				for (int i = 0; i < 300; i++)
				{
					getline (filenameB, output);
					test[i] = output.c_str();
				}
				
				for (int i = 0; i < 50; i++)
				{
					course1[i].get(Qname, Qtime, Qnumber, Qg, Qhours);
					
					if (Qnumber == ClassNum[i])
					{
						for (int i = 0; i < 300; i++)
						{
							if (Qnumber == test[i])
								{
									
									Reqlist[placeholder].set(Qnumber, Qhours);
								    
									placeholder++;
									
								}
						}
					}
				}
// English req
				for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "English")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest[index] = test[j]; 
							index++;
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					//cout << newtest[index] << " 0" << endl;
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 100; i++)
						{
							if (newtest[i] == Qnumber)
							{
								Ereq = (Ereq - Qhours);
								Reqlist[index].set(Qnumber, 0);
							}
							
							if (Ereq <= 0)
							{ 
								Ereq = 0;
								break;
							}
						}
						
					}
					
					
// Fine Arts					
				}
					
				for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "Fine Arts")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest1[index] = test[j]; 
							
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					
					if (index < placeholder)
					{
						
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest1[i] == Qnumber)
							{
							FAreq = (FAreq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (FAreq <= 0)
							{ 
								FAreq = 0;
								break;
							}
						}
					}
					
					
					
				}
// Math				
				for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "Mathematics")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest2[index] = test[j]; 
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest2[i] == Qnumber)
							{
							Matreq = (Matreq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (Matreq <= 0)
							{ 
								Matreq = 0;
								break;
							}
						}
					}
					
					
					
				}
// Sci req				
				for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "Science")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest3[index] = test[j]; 
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest3[i] == Qnumber)
							{
							Scireq = (Scireq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (Scireq <= 0)
							{ 
								Scireq = 0;
								break;
							}
						}
					}
					
					
					
				}
//Hum req				
				for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "Humanities")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest4[index] = test[j]; 
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest4[i] == Qnumber)
							{
							Humreq = (Humreq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (Humreq <= 0)
							{ 
								Humreq = 0;
								break;
							}
						}
					}
					
					
					
				}
// US req				
					for (int i = 0; i < 300; i++)
				{ 
					if (test[i] == "U.S. History")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest5[index] = test[j]; 
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 100; index++)
				{
					
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest5[i] == Qnumber)
							{
							USreq = (USreq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (USreq <= 0)
							{ 
								USreq = 0;
								break;
							}
						}
					}
					
					
					
				}
// SS req				
				for (int i = 0; i < 300; i++)
				{ 
			     
					if (test[i] == "Social Sciences")
					{
						
						for (int j = i + 1; j < 300; j++)
						{
							int index = j;
							if (j < 0)
								break;
							newtest6[index] = test[j]; 
							
							
							if (test[j].length()==0) 
								break;
						}	
					}
						
					
				}
				for (int index = 0; index < 300; index++)
				{
					
					if (index < placeholder)
					{
						Reqlist[index].get(Qnumber, Qhours);
						
						for (int i = 0; i < 300; i++)
						{
							if (newtest6[i] == Qnumber)
							{
							SSreq = (SSreq - Qhours);
							Reqlist[index].set(Qnumber, 0);
							}
							
							if (SSreq <= 0)
							{ 
								SSreq = 0;
								break;
							}
						}
					}
					
					
					
				}
				
				
				cout << "Your required credits for English are " << Ereq << endl;
				cout << "Your required credits for Fine Arts are " << FAreq <<   endl;
				cout << "Your required credits for Mathematics are "<< Matreq <<  endl;
				cout << "Your required credits for Social Sciences are "<< SSreq <<  endl;
				cout << "Your required credits for Humanities are "<< Humreq <<  endl;
				cout << "Your required credits for U.S. History are "<< USreq <<  endl;
				cout << "Your required credits for Science are "<< Scireq <<  endl;
				
			}
			
		}
		
// Requirements feature
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
