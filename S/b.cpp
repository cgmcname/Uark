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
    
    string cName[arrayamount];
    string cNum[arrayamount];
    
    
    int How_many_classes = 0;
    int class_save = 0;
    int i = 0;
    int j = 0;
    
    //char YES_NO;
    
    double Gtotal;
    double CHtotal;
    double GPtotal;

    cout << "Since the dawn of time many have wished to have a grade point calculator..." << endl;
    cout << endl;
    
    cout << "Now your dreams have come true." << endl;
    cout << endl;
    
    cout <<  "Please enter the number of classes you would like to calculate: " ;
    cin >> How_many_classes;
    cout << endl;
    
    while ( How_many_classes < 1 || How_many_classes > 100 )
    {
    
        cout << "The number of classes you have selected is invalid." << endl;
        cout << "Please enter a value between 1 and 100: ";
        cin >> How_many_classes;
        cout << endl;
        
    }
    
    class_save = How_many_classes;

    
		
	
	
    while(How_many_classes > 0)
    {
        
       
        cin.ignore(256, '\n');
        cout << "Please enter the course name: ";
        getline(cin, cName[i]);
        cout << endl;
        
        cout << "Please enter the course number: ";
        getline(cin, cNum[i]);
        cout << endl;
        
        
        cout << "Please enter a grade (A, B, C, D, F, or W): ";
        cin >> grade[i];
        
        while ((toupper(grade[i]) != 'A') && (toupper(grade[i]) != 'B') && (toupper(grade[i]) != 'C'))
        {
            
            cout << "Please enter a valid input (A, B, C, D, F, or W): "; 
            cin >> grade[i];
            cout << endl;
        }
        
        
        cout << "PLease enter the corresponding number of course hours (1-4 Hours): ";
        cin >> coursehours[i];
        cout << endl;
        
        while (coursehours[i] < 1 || coursehours[i] > 4 )
        {
            
            cout << "Please enter a valid input (1-4 Hours): ";
            cin >> coursehours[i];
            cout << endl;
            
        }
        
        
        
        How_many_classes--;
        
        i++;
        
       
    }
    
    
    for (int i =0; i< class_save; i++)
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