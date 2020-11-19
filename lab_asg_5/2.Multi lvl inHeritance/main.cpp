#include <iostream>

using namespace std;

class Architecture
{

private:
	string arc;

 };

class Engine : private Architecture
{
 public:
	Engine(int nc){
		 cylinder = nc;
	}

	void start() {
		cout << getCylinder() <<" cylinder engine started" << endl;
	};

	int getCylinder() {
		return cylinder;
	}


private:
	int cylinder;

 };

 class Car : private Engine
{    // Car has-a Engine
 public:
   Car(int nc = 4) : Engine(nc) { }
   void start() {
	cout << "car with " << Engine::getCylinder() <<
		   " cylinder engine started" << endl;
	Engine:: start();
   }
 };

int main( )
{
	Car c(8);
	c.start();

	return 0;
}
