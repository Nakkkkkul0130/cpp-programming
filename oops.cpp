#include <iostream>
using namespace std;

class student {

        int age;

    public:         // used public here because we can access all the properties of a class anywhere rather than in class only
        int roll_no;
        void display()
        {
            cout<<age;
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
    student s1, s2, s3, s4;
    s1.roll_no = 07;
    // s1.age = 19;

    //cout<<s1.age<<endl;
    cout<<s1.roll_no<<endl;
    s2.setage(20);
    s2.display();
    //cout<<s2.getage()<<endl;
}