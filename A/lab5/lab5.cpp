#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void check (const string& s, const string& name)
{
    cout <<"checking " << name << endl;
    cout << name << " contains " << s << endl;
    cout << name << " capacity() is " << s.capacity() << endl;
    cout << name << " length() is " << s.length() << endl;
    cout << name << " size() is " << s.size() << endl;
    cout << name << " max_size() is " << s.max_size() << endl;
}

int main()
{
    string s1;
    s1 = "Hello, World!";
    
    check(s1, "s1");
    
    string s0, s2;
    
    cout << s0.empty() << endl;
    
    s2 = s1;
    
    s2.push_back('!');
    
    s1 = s1 += s2;
    
    check(s2, "s2");
    check(s1, "s1");
    
    s1.insert(13, " ");
    
    check(s1, "s1");
    
    s0 = s1 + " " + s2;
    
    check(s0, "s0");
    
    s0.reserve(50);
    
    check(s0, "s0");
    
    char c = s0[12];
    
    cout << c << endl;
    
    s2.append(s2);
    
    check(s2, "s2");
    
    s2.replace(12, 2, " = ");
    
    check(s2, "s2");
    
    const char * p; 
    
    p = s2.c_str();
    
    cout << p << endl;
    
    if (s2.c_str() == p )
        cout << "true" << endl;
    
    s2[12] = s0[12];
    
    check(s2, "s2");
    
    s0.clear();
    s2.clear();
    
    cout << p << " here " << endl;
    
    return 0;
}
