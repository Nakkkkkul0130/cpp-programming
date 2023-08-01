#include <iostream>
using namespace std;

class student
{
    public:
        int age;
        int rollnumber;
        static int totalstudent;        // static member
        //int &x;


        //student(int r, int a) : rollnumber(r) , age(a), x{this->age}
        //{

        //}
};

int student::totalstudent = 0;    //initialise static member 

int main()
{
    /*
    student s1(100, 10);
    s1.age = 19;
    */
    student s1;
    cout<<s1.rollnumber<<" "<<s1.age<<endl;
    cout<<student::totalstudent;         // syntax to use static member
    // s1.rollnumber = 27;
}

// ------------operator overloading------------
/*

f1 = f2+f3 // this is incoorect
int c=a+b  //correct
but we want that f1=f2+f3 will work so we extend the property of "+" operator
this is called opeartor overloading 
  
*/
