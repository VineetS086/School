#include <iostream>
#include<string.h>

using namespace std;
class Student {            //Data Members:  name, rollNo, objectCount(static)
   public:
   int rollNo;
   string name;

   static int objectCount;
   Student() {
      objectCount++;    //an +1 when new obj of Student class is declared
   }


   void putdata() {                             //basic function to OPT data
      cout<<"Roll Number = "<< rollNo <<endl;
      cout<<"Name = "<< name <<endl;

   }
};
int Student::objectCount = 0;                   // decl objectCount = 0 it will help to count no of objs of Student Class here
int main(void) {


    Student s1;                 //obj created
    s1.name = "Sunveer";
    s1.rollNo = 78;
    s1.putdata();
    cout << "Total objects created = " << Student::objectCount << endl<<"--------------------------------------------"<<endl;

    Student s2;                 //obj created
    s2.name = "Sushant";
    s2.rollNo = 79;
    s2.putdata();
    cout << "Total objects created = " << Student::objectCount << endl<<"--------------------------------------------"<<endl;

    Student s3;                 //obj created
    s3.name = "Swayam";
    s3.rollNo = 80;
    s3.putdata();
    cout << "Total objects created = " << Student::objectCount << endl<<"--------------------------------------------"<<endl;
    cout <<"\n\ns1.objectCount = "<<s1.objectCount<<" = s2.objectCount = "<<s2.objectCount<<" = s3.objectCount = "<<s3.objectCount<<"\n\n\n";  //Hence Static remains the same over all the classes


   return 0;
}
