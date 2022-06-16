/*Write a program to create a class Medicine which stores type of medicine, name of company, date of manufacturing.
 Class Tablet is inherited from Medicine. Tablet class has name of tablet, quantity per pack, price of one tablet as members.
 Class Syrup is also inherited from Medicine and it has quantity per bottle, dosage unit as members.
 Both the classes contain necessary member functions for input and output data.
 Write a main( ) that enter data for tablet and syrup, also display the data.
 Use the concepts of Hierarchical Inheritance.*/

#include <iostream>
using namespace std;

class Medicine
{
    string typeOfmedicine;
    string nameOfcompany;
    int dataOfmanufacturing;

public:
    void getdata()
    {
        cout << "\nEnter the type of medicine: ";
        cin >> typeOfmedicine;
        cout << "Enter the name of company: ";
        cin >> nameOfcompany;
        cout << "Enter the date of manufacturing: ";
        cin >> dataOfmanufacturing;
    }
    void display()
    {
        cout << "Medicine is of type : " << typeOfmedicine <<endl;
        cout<< "Name Of company :" << nameOfcompany<< endl;
        cout<<"Company having date of manufacturing is : " << dataOfmanufacturing<<endl;
    }
};
class Tablet : public Medicine
{
    string nameOftablet;
    int quantity;
    float price;

public:
    void setdata()
    {
        cout << "Enter the name of tablet: ";
        cin >> nameOftablet;
        cout << "Enter the quantity per pack: ";
        cin >> quantity;
        cout << "Enter the price of one tablet: ";
        cin >> price;
    }
    void display()
    {
        cout << "Name of tablet is: " << nameOftablet << endl;
        cout << "Quantity per pack is: " << quantity << endl;
        cout << "price of one tablet is: " << price << endl;
    }
};
class Syrup : public Medicine
{
    string nameOfsyrup;
    int qpb;
    int dpb;

public:
    void gtdata()
    {
        cout << "Enter the name of syrup: ";
        cin >> nameOfsyrup;
        cout << "Enter the quantity per bottle(in ml): ";
        cin >> qpb;
        cout << "Enter the dose per bottle: ";
        cin >> dpb;
    }
    void displaydata()
    {
        cout << "Name of Syrup is: " << nameOfsyrup << endl;
        cout << "Quantity per bottle(in ml: " << qpb << endl;
        cout << "Dose per bottle is: " << dpb << endl;
    }
};

int main()
{
    Syrup s;
    Tablet t;

    t.setdata();
    t.display();

    cout << endl;

    s.gtdata();
    s.displaydata();
    s.getdata();
    s.display();
    cout<<"\n20CS018-DEV HALVAWALA\n";

    return 0;
}
