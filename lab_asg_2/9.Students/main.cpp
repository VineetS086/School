#include <bits/stdc++.h>
using namespace std;
class Student           //Data members: Roll No,Name ,Address ; Class member function:  getdata, display data();
{
    // Access specifier
    public:

    // Data Members
    string name;
    string adress;
    string roll_no;

    // Member Functions()
    void getdata()  //Getting Student data FROM KEYBOARD (INPUT)
    {
       cout<< "Getting Data \n";
       cout<<"Student's Name: ";
       cin>>name ;
       cout<<"Student's Roll no.: ";
       cin>>roll_no ;
       cout<<"Student's Adress(use '_' for space): ";
       cin>>adress ;cout<<endl;


    }
    void display_data()         //Getting Student data TO SCREEN  (OUTPUT)
    {
        cout<<"Name: "<<name<<endl ;
        cout<<"Roll no.: "<<roll_no<<endl;
        cout<<"Adress: "<<adress<<endl ;
    }
};

int main() {

    Student obj1;
    obj1.getdata();
    obj1.display_data();
    return 0;
}
