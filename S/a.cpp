#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    
    const int arrayamount = 100;
    char grade[arrayamount];
    double gradepoint[arrayamount];
    double coursehours[arrayamount];
    
    bool escape = true;
    
    
    int How_many_classes = 0;
    int i = 0;
    int j = 0;
    
    char YES_NO;
    
    double Gtotal;
    double CHtotal;
    double GPtotal;

    cout << "Since the dawn of time many have wished to have a grade point calculator...\n\nNow your dreams have come true.\n\nPlease enter a grade (A, B, C, D, F, or W) followed by the class's credit hours: \n";
		
	
	
    while(escape)
    {
        cin >> grade[i] >> coursehours[i];
        
        How_many_classes++;
        
        i++;
        
        cout << "Would you like to add a new class for the calculator (Y/N)" << endl;
        
        cin >> YES_NO;
        
        
        if (toupper(YES_NO)== 'N')
        {
                escape = false;
        }
        
        cout <<  "Please enter a grade (A, B, C, D, F, or W) followed by the class's credit hours: \n";
        
    }
    
    
    for (int i =0; i<How_many_classes; i++)
    {
        
        if (toupper(grade[i]) == 'A')
        {
            gradepoint[j] = 4.0;
            j++;
        }
        else if (toupper(grade[i]) == 'B')
        {
            gradepoint[j] = 3.0;
            j++;
        }
        else if (toupper(grade[i]) == 'C')
        {
            gradepoint[j] = 2.0;
            j++;
        }
        else if (toupper(grade[i]) == 'D')
        {
            gradepoint[j] = 1.0;
            j++;
        }
        else if (toupper(grade[i]) == 'F')
        {
            gradepoint[j] = 0.0;
            j++;
        }
        else
        {
            gradepoint[j] = 0.0;
            j++;
        }
       
        Gtotal += (gradepoint[i] * coursehours[i]);
        cout << "GP " << Gtotal << endl;
        
        CHtotal += coursehours[i];
        cout << "CH " << CHtotal << endl;
        
    }
	
    GPtotal = (Gtotal/CHtotal);
    
    cout << "Your GPA is: " << GPtotal << endl; 
    cout << endl;
    
    cout << "Thank you" << endl;
    








    return 0;

}