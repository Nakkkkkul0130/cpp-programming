#include <iostream>
using namespace std;

class student
{

    int age;

public: // used public here because we can access all the properties of a class anywhere rather than in class only
        // default constructor
    student()
    {
        cout << "constructor 1 called: " << endl;
    }

    // parameterised constructor
    student(int r)
    {
        cout << "constructor 2 called: " << endl;
        roll_no = r;
    }

    student(int a, int r)
    {
        cout<<"this "<<this<<endl;
        cout << "constructor 3 called: " << endl;
        age = a;
        roll_no = r;
    }

    int roll_no;
    void display()
    {
        cout << age << " " << roll_no << endl;
    }
    int getage() // getage function to read
    {
        return age;
    }
    void setage(int a) // setage function to write
    {
        if (a < 0)
        {
            return;
        }
        age = a;
    }
};

int main()
{
    student s1(45,50);
    cout<<"s1: ";
    s1.display();

    student s2(s1);           // copy constructor
    cout<<"s2: ";
    s2.display();

    // use this for "this" keyword
    /* 
    student s1(30,90);
    cout<<"address of s1: "<<&s1<<endl;   // that "this" keyword and address of s1 is same
    */ 
    

    // used this for constructor 
    /*

    // creating object
    student s1;
    s1.display(); // constructor 1 called
    // s1.roll_no = 07;
    // s1.age = 19;

    // cout<<s1.age<<endl;
    // cout << s1.roll_no << endl;
    student s2;
    // s2.setage(20);
    s2.display();               // constructor 2 called
    // cout<<s2.getage()<<endl;

    student s3(10);
    s3.display(); // constructor 2 called

    student s4(50, 100);
    s4.display(); // constructor 3 called

    */
}