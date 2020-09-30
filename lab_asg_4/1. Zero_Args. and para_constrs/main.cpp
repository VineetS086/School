#include <iostream>

using namespace std;

class Point_zero{       //Zero Argument Class

public:
    int x = 0;
    int y = 0;

    Point(){            // No arguments required
        int x = 0;
        int y = 0;
    }

    void graph(){
    cout<<"The point is at ("<<x<<", "<<y<<")\n";
    }
};

class Point{        // parameterized constructors

public:
    int x,y;
    Point(int x_, int y_){  // 2 arguments required
        x = x_;
        y = y_;
    }
    void graph(){
        cout<<"The point is at ("<<x<<", "<<y<<")\n";
    }
};

int main()
{
    Point_zero obj_0;   // No arguments Passed
    Point obj_1(1,4);   // 2  arguments Passed

    cout<<"obj_0 : ";
    obj_0.graph();
    cout<<"obj_1 : ";
    obj_1.graph();
}
