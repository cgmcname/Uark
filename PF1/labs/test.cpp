#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main()
{
// Set values
//int Num_of_courses;
string coursename;
string coursenum;

//beginning input
	//cout << "Please enter total courses :";
	//cin >> Num_of_courses;

	cout << "enter course name:"; 
	getline (cin, coursename);
	cout << "enter course number: ";
	getline (cin, coursenum);
	
	cout << "Hello, " << coursename << endl;
	cout << "You live in " << coursenum << endl;
return 0;
}
