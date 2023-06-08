# include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if (age>150 || age<1)
    {
        cout<<"invalid";
    }
    else if (age>=18)
    {
        cout<<"you can vote";
    }
    else
    {
        cout<<"u can't vote";
    }
}