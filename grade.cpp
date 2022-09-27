#include <iostream>
using namespace std;

struct student
{
    char name[50],g;
    int roll;
    float m1,m2,m3,avg;
};

int main() 
{
    student s;
    cout << "Enter Student details" << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter mark1: ";
    cin >> s.m1;
    cout << "Enter mark2: ";
    cin >> s.m2;
    cout << "Enter mark3: ";
    cin >> s.m3;
    s.avg = (s.m1+s.m2+s.m3)/3;
    cout << "\nStudent details" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "GRADE: " << endl;
    if(s.avg>90)
        cout<<"S";
    else if(s.avg>80)
        cout<<"A";
    else if(s.avg>70)
        cout<<"B";
    else if(s.avg>=60 )
        cout<<"C";
    else if(s.avg>50)
        cout<<"D";
    else if(s.avg<50)
        cout<<"F";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}
