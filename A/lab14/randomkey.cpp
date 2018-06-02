// lab 14 or hashing lab support function
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
// generate random alphanumeric keys in [min,max] range
// min >= 1
// current alphabet includes 0 to 9, a to z, A to Z, and _ -
using namespace std;
string randomkey(unsigned int min, unsigned int max){
    const int SIZE = 64;
    const char alphabet[SIZE]={'0','1','2','3','4','5','6','7','8','9',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
    'q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G',
    'H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X',
    'Y','Z','-','_'};
    // simple error handling
    if (min == 0)
        min = 1;
    if (max <min)
        max = min;
    // pick a length between min and max
    int no_of_len = max - min + 1;    
    int len = rand() % no_of_len;
    len = len + min;
    // len is one of min, min+1,...max
    string s;
    for (int i = 0; i < len; i++){
        s.push_back(alphabet[rand() % SIZE]);
    }
    return s;
}
