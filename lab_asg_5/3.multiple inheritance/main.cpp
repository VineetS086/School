#include <iostream>
using namespace std;

class A {
    int i;
    public:
        A() : i(1) {
            cout << "A's constructor\n";
        }
        void printI(){
    	    cout << "i = " << i << "\n";
        }
};

class B {
    char c;
    public:
        B() : c('a') {
            cout << "B's constructor\n";
	}

	void printC(){
    	    cout << "c = " << c << "\n";
        }
};

class C : public A, public B {
    public:
        C() {
            cout << "C's constructor\n";
	}
};

int main () {
    C c;

    c.printI();
    c.printC();
}
