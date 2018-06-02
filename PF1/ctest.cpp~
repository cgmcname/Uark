
#include <cstdlib>
#include <iostream>

using namespace std;
class XYZ {
public:
    XYZ(const XYZ& obj)
    {
        cout << "Hello\n";
    }
    XYZ(int x) 
    {
        num =x;
    }
    void print()
    {
        cout << "num = " << num << endl;
    }
private:
    int num;
};

XYZ f(XYZ arg)
{
    cout << "Hey\n";
    return arg;
}



int main(int argc, char** argv) {
    XYZ y(10);
    XYZ z(y);
     
    y.print();
    z.print();
    
   
    y=f(z);
    
    y.print();
    z.print();
    
    return 0;
}

