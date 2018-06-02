/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cgmcname
 *
 * Created on April 29, 2016, 1:52 PM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <math.h>

using namespace std;



size_t charToint (char c)
{
    if (c >= '0' && c<= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    else if (c >= 'a' && c<= 'z')
        return c-'a' + 36;
    else if (c == '-')
        return 62;
    else if (c == '_')
        return 63;
                
}

size_t dmHash(string key, size_t tableSize)
{
    char * cstr = new char [key.length()+1];
    strcpy (cstr, key.c_str());
    int total = 0;
    int sizehold = key.length();
    int num = 0;
    
    for (int i = 0; i < key.length(); i++)
    {
        
        while (i < key.length())
        {
           total += charToint(cstr[i]) * tableSize (% (sizehold + charToint(cstr[i]));
              sizehold--;      
        }
        
        
    }
    
    delete[] cstr;
    return total;
}

/*
 * 
 */
int main(int argc, char** argv) 
{
    cout << dmHash("a9B34", 103981) << endl;
    
    
    
    
    return 0;
}

