#include <iostream>
using namespace std;

class student {

        int age;

    public:         // used public here because we can access all the properties of a class anywhere rather than in class only

        // default constructor
        
           student ()
           {
                cout<<"constructor called: "<<endl;
           }

        // parameterised constructor
            student (int r)
            {
                cout<<"constructor 2 called: "<<endl;
                roll_no = r;
            }

            student (int a, int r)
            {
                cout<<"constructor 3 called: "<<endl;
                age = a;
                roll_no = r;
            }
        
    
        int roll_no;
        void display()
        {
            cout<<age<<endl;
        }
        int getage()                //getage function to read
        {
            return age;
        }
        void setage(int a)             //setage function to write
        {
            if(a<0)
            {
                return;
            }
            age = a;
        }
    
};

int main()
{
    // creating object 
    student s1;
    s1.display();            // constructor called
    s1.roll_no = 07;
    // s1.age = 19;

    //cout<<s1.age<<endl;
    cout<<s1.roll_no<<endl;
    student s2;
    s2.setage(20);
    s2.display();              // constructor called
    //cout<<s2.getage()<<endl;

    student s3(10);
    s3.display();              // constructor 2 called

    student s4(50,100);
    s4.display();              // constructor 3 called


}