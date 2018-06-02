#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
// Set values

char grade;

float credithour1,credithour2,credithour3,credithour4,totalhours,formula;

float gpv1,gpv2,gpv3,gpv4;

//Beginning prompt
	cout << "Welcome to the GPA calculator." << endl; 
	cout << "Please enter your class grade as a capital letter" << endl; 
	cout << "followed by a space and then the credit hours for the class" << endl;
//Program input

//First Input	
	cout << "Enter first (uppercase) letter grade and credit hours earned :";
	cin >> grade >> credithour1;
		
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
		else
			cout << "Incorrect value entered";

//Second Input
	cout << "Enter second (uppercase) letter grade and credit hours earned:";
	cin >> grade >> credithour2;

		if (grade == 'A')
			gpv2 = 4.;
		else if (grade == 'B')
			gpv2 = 3.;
		else if (grade == 'C')
			gpv2 = 2.;
		else if (grade == 'D')
			gpv2 = 1.;
		else if (grade == 'F')
			gpv2 = 0.;
		else
			cout << "Incorrect value entered";

//Third Input
	cout << "Enter third (uppercase) letter grade and credit hours earned:";
	cin >> grade >> credithour3;

		if (grade == 'A')
			gpv3 = 4.;
		else if (grade == 'B')
			gpv3 = 3.;
		else if (grade == 'C')
			gpv3 = 2.;
		else if (grade == 'D')
			gpv3 = 1.;
		else if (grade == 'F')
			gpv3 = 0.;
		else
			cout << "Incorrect value entered";

//Fourth Input
	cout << "Enter fourth (uppercase) letter grade and credit hours earned :";
	cin >> grade >> credithour4;

		if (grade == 'A')
			gpv4 = 4.;
		else if (grade == 'B')
			gpv4 = 3.;
		else if (grade == 'C')
			gpv4 = 2.;
		else if (grade == 'D')
			gpv4 = 1.;
		else if (grade == 'F')
			gpv4 = 0.;
		else
			cout << "Incorrect value entered";
		
		
//Calculate

totalhours= (credithour1 + credithour2 + credithour3 + credithour4);
formula= ((gpv1*credithour1)+(gpv2*credithour2)+(gpv3*credithour3)+(gpv4*credithour4))/totalhours;

	cout << "Your grade point:" << setprecision(2) << formula << endl;
   	return 0;
   
}  



