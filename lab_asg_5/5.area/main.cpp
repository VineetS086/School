#include <iostream>

using namespace std;

// Base class
class Shape {
   public:

      int getArea() {
         return (0.5*perimeter * apothem);
      }

   protected:
      int perimeter;
      int apothem ;
};

// Derived class
class Rectangle: public Shape {

    int length, breadth;


    public:
    Rectangle(int len, int bre ) {     // Constructor

    }

    int apothem   = ;
    int perimeter = 2*(length+breadth);
};

int main(void) {
   Rectangle Rect(5,7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}
