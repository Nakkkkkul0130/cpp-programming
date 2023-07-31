#include <iostream>
using namespace std;

class student 
{
    int age;
    char *name;

    public:
        student(int age, char *name){
            this->age = age;
            this->name = name;           // shallow copy
        }
        void display()
        {
            cout<<name<<" "<<age<<endl;
        }
};
int main()
{
    char name[] = "abcd";
    student s1(23, name);
    s1.display();

    student s2(21, name);
    s2.display();

    return 0;
}

