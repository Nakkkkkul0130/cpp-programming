#include <iostream>
using namespace std;

class student
{
    public:
        int age;
        const int rollnumber;
        int &x;

        student(int r, int a) : rollnumber(r) , age(a), x{this->age}
        {

        }
};

int main()
{
    student s1(100, 10);
    s1.age = 19;
    // s1.rollnumber = 27;
}
