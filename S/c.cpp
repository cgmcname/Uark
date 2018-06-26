#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;








int main()
{
    
    const int arrayamount = 100;
    
    int dPlace[arrayamount];
    
    char grade[arrayamount];
    
    double gradepoint[arrayamount];
    double coursehours[arrayamount];
    
    string cName[arrayamount];
    string cNum[arrayamount];
    string cSemester[arrayamount];
    
    
    int How_many_classes = 0;
    int class_save = 0;
    int i = 0;
    int j = 0;
    
    char menu_select;
    
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
        
        cout << "Please enter the course semester: ";
        getline(cin, cSemester[i]);
        cout << endl;
        
        std::transform(cSemester[i].begin(), cSemester[i].end(),cSemester[i].begin(), ::toupper);
        
        while ( cSemester[i] != "FALL" && cSemester[i] != "SPRING" && cSemester[i] != "SUMMER")
        {
            cout << "Please enter a valid semester. (Fall, Spring, or Summer)" << endl;
            
            cout << "Please enter the course semester: ";
            getline(cin, cSemester[i]);
            cout << endl;
            
            std::transform(cSemester[i].begin(), cSemester[i].end(),cSemester[i].begin(), ::toupper);
            
        }
        
        
        cout << "Please enter a grade (A, B, C, D, F, or W): ";
        cin >> grade[i];
        
        while ((toupper(grade[i]) != 'A') && (toupper(grade[i]) != 'B') && (toupper(grade[i]) != 'C')&& (toupper(grade[i]) != 'D') )
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
        
        
        CHtotal += coursehours[i];
        
        
    }
	
    GPtotal = (Gtotal/CHtotal);
    
    cout << "Your GPA is: " << GPtotal << endl; 
    cout << endl;
    
    cout << "If you would like there are addtional options available. Please select from the following: " << endl << endl;
    
    cout << "A. Compute the GPA of all courses " << endl;
    cout << "B. List all courses " << endl;
    cout << "C. Compute the total credit hours of the courses with grade D " << endl;
    cout << "D. Compute the GPA for a particular semester " << endl;
    cout << "E. Add another course to the course list. " << endl;
    cout << "Q. Quit the program. " << endl << endl;
    
    cout << "Enter here: ";
    
    cin >> menu_select;
    
    cout << endl;
    
    
    
    while (toupper(menu_select) != 'Q')
    {
        
        
        
        if (toupper(menu_select) == 'A')
        {
            cout << "Your GPA is: " << GPtotal << endl << endl; 
            
            cin.ignore(256, '\n');
            
            cout << "Press enter to continue: " ;
        
            cin.get();
            
            cout << endl;
        }
        else if (toupper(menu_select) == 'B')
        {
            for (int i =0; i < class_save; i++)
            {
                    cout << cName[i] << endl << endl;
                
            }
            
            cin.ignore(256, '\n');
            
            cout << "Press enter to continue: " ;
        
            cin.get();
            
             cout << endl;
        }
        else if (toupper(menu_select) == 'C')
        {
            
            int save = 0;
            double CHtotal_forD = 0.0;
            
            for (int i = 0; i < class_save; i++)
            {
                if (toupper(grade[i]) == 'D')
                {
                  dPlace[save] = i;
                  save++;
                }
                    
                //cout << "Look grade : " << grade[i] << endl;
                
            }
            
            for (int i = 0; i < save; i++)
            {
                    
                    //cout << "Look : " << dPlace[i] << endl;
                    CHtotal_forD += coursehours[dPlace[i]]; 
                
            }
            
            cout << "Total hours in a class with a D: " << CHtotal_forD << endl << endl;
            
            cin.ignore(256, '\n');
            
            cout << "Press enter to continue: " ;
        
            cin.get();
            
            cout << endl;
            
            
        }
        else if (toupper(menu_select) == 'D')
        {
            
            double Gtotal_forS = 0.0;
            double CHtotal_forS = 0.0;
            double GPtotal_forS = 0.0;
            
            string input;
            
            
            
            cin.ignore(256, '\n');
            cout << "What semester would you calculate for?: " ;
            getline(cin, input);
            cout << endl;
            
            std::transform(input.begin(), input.end(),input.begin(), ::toupper);
            
            while ( input != "FALL" && input != "SPRING" && input != "SUMMER")
            {
            
                cout << "Please enter a valid semester. (Fall, Spring, or Summer)" << endl;
            
                cout << "Please enter the course semester for calculation: ";
                getline(cin, input);
                cout << endl;
            
                std::transform(input.begin(), input.end(),input.begin(), ::toupper);
            
            }
        
            
            for (int i =0; i < class_save; i++)
            {
                   if (cSemester[i] == input)
                   {
                        Gtotal_forS += (gradepoint[i] * coursehours[i]);
        
        
                        CHtotal_forS += coursehours[i];
                       
                   }
                
            }
            
            
            
            GPtotal_forS = (Gtotal_forS/CHtotal_forS);
    
            cout << "Your semester GPA is: " << GPtotal_forS << endl << endl;
            
            
            //cin.ignore(256, '\n');
            
            cout << "Press enter to continue: " ;
        
            cin.get();
            
            cout << endl;
            
            
        }
        else if (toupper(menu_select) == 'E')
        {
            
            How_many_classes++;
            
            while(How_many_classes > 0)
            {
                    
                
                    cin.ignore(256, '\n');
                    cout << "Please enter the course name: ";
                    getline(cin, cName[class_save]);
                    cout << endl;
                    
                    cout << "Please enter the course number: ";
                    getline(cin, cNum[class_save]);
                    cout << endl;
                    
                    cout << "Please enter the course semester: ";
                    getline(cin, cSemester[class_save]);
                    cout << endl;
                    
                    std::transform(cSemester[class_save].begin(), cSemester[class_save].end(),cSemester[class_save].begin(), ::toupper);
                    
                    while ( cSemester[class_save] != "FALL" && cSemester[class_save] != "SPRING" && cSemester[class_save] != "SUMMER")
                    {
                        cout << "Please enter a valid semester. (Fall, Spring, or Summer)" << endl;
                        
                        cout << "Please enter the course semester: ";
                        getline(cin, cSemester[class_save]);
                        cout << endl;
                        
                        std::transform(cSemester[class_save].begin(), cSemester[class_save].end(),cSemester[class_save].begin(), ::toupper);
                        
                    }
                    
                    
                    cout << "Please enter a grade (A, B, C, D, F, or W): ";
                    cin >> grade[class_save];
                    
                    while ((toupper(grade[class_save]) != 'A') && (toupper(grade[class_save]) != 'B') && (toupper(grade[class_save]) != 'C') && (toupper(grade[class_save]) != 'D') )
                    {
                        
                        cout << "Please enter a valid input (A, B, C, D, F, or W): "; 
                        cin >> grade[class_save];
                        cout << endl;
                    }
                    
                    
                    cout << "PLease enter the corresponding number of course hours (1-4 Hours): ";
                    cin >> coursehours[class_save];
                    cout << endl;
                    
                    while (coursehours[class_save] < 1 || coursehours[class_save] > 4 )
                    {
                        
                        cout << "Please enter a valid input (1-4 Hours): ";
                        cin >> coursehours[class_save];
                        cout << endl;
                        
                    }
                    
                    
                    
                   
                    
                    
                    if (toupper(grade[class_save]) == 'A')
                    {
                        gradepoint[class_save] = 4.0;
                        
                    }
                    else if (toupper(grade[class_save]) == 'B')
                    {
                        gradepoint[class_save] = 3.0;
                        
                    }
                    else if (toupper(grade[class_save]) == 'C')
                    {
                        gradepoint[class_save] = 2.0;
                        
                    }
                    else if (toupper(grade[class_save]) == 'D')
                    {
                        gradepoint[class_save] = 1.0;
                        
                    }
                    else if (toupper(grade[class_save]) == 'F')
                    {
                        gradepoint[class_save] = 0.0;
                        
                    }
                    else
                    {
                        gradepoint[class_save] = 0.0;
                        
                    }
                
                    Gtotal += (gradepoint[class_save] * coursehours[class_save]);
                    
                    
                    CHtotal += coursehours[class_save];
                    
                    GPtotal = (Gtotal/CHtotal);
                    
                    How_many_classes--;
                    
                    class_save++;
                    
        
            }
        }
        else
        {
            cout << "Please select a valid option" << endl << endl;
            
            cin.ignore(256, '\n');
          
            cout << "Press enter to continue: " ;
        
            cin.get();
            
            cout << endl << endl; 
        }
        
        
        
        cout << "If you would like there are addtional options available. Please select from the following: " << endl << endl;
    
        cout << "A. Compute the GPA of all courses " << endl;
        cout << "B. List all courses " << endl;
        cout << "C. Compute the total credit hours of the courses with grade D " << endl;
        cout << "D. Compute the GPA for a particular semester " << endl;
        cout << "E. Add another course to the course list. " << endl;
        cout << "Q. Quit the program. " << endl << endl;
    
        cout << "Enter here: ";
    
        cin >> menu_select;
    
        cout << endl;
        
        
        
        
      
    }
    
    cout << "Thank you" << endl;
    








    return 0;

}