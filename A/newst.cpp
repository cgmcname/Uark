#include <cstring>
#include <cstdlib>
#include <iostream>
//#include "mystrcat.h"
//#include "mystrlen.h"
//#include "mystrtok.h"

using namespace std;

int main()
{

char line[] = "ls -l -a | wc -c >> myfile";
size_t len = strlen(line);


cout << len << endl;

char* strArray[10];
for (int i = 0; i < 10; i++)
    strArray[i] = NULL;

int pieces = 0;
char * ptr = strtok( line, " ");

while (ptr != NULL)
{
    strArray[pieces] = ptr;
    ptr = strtok(NULL, " ");
    pieces++;
}
for (int i = 0; i < pieces; i++)
    cout << strArray[i] << endl;

size_t size = 0;

for (int i = 0; i < pieces; i++)
    size += strlen(strArray[i]);

size_t numBlanks = len-size;
cout << numBlanks << endl;


char* result = new char[size + 1];
result[0] = NULL;

for (int i = 0; i < pieces; i++)
    strcat(result, strArray[i]);
    
cout << result;
delete[] result;

return 0;
}
