#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    //------------WHILE LOOP-----------
    while (a < 10)
    {
        cout << "valur is at" << a << endl;
        a += 1;
    }
    //-----------DO WHILE LOOP------------

    do
    {
        cout << "value is at" << a << endl;
        a += 1;
    } while (a > 10);

    // output = value is at zero

    do
    {
        cout << "value is at: " << a << endl;
        a += 1;
    } while (a < 10);

    // output = value print from 0-9

    //-----------FOR LOOP----------

    for (a = 0; a < 10; a++)
    {
        cout << "value of a is: " << a << endl;
    }
}