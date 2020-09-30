#include <iostream>

using namespace std;

class Demo{
    const char* p;

public:

    Demo(){         // default constructor

        p = new char[6];            // allocating memory at run time
        p = "India";
    }
    void display()
    {
        cout << p << endl;
    }
};

int main()
{
    Demo obj_1;
    obj_1.display();

}
