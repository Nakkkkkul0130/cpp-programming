#include <iostream>
using namespace std;

// int length(char input[])
// {
//     int count = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;

// }
int main()
{
    // strings - 1D character array
    // int - 4bites per
    // char - 1byte per

    // char name[10];
    // cout << "enter your name: ";
    // cin >> name;
    // // input is coding then from 0-5 coding is print and remaining space have null character "/0" is printed
    // cout<<"your name is: "<<name<<endl;
    // cout << length(name);  // length of name

    //-----------------------------cin.getline function---------------------

    char input[10];
    cout<<"enter the input: ";  // hello world
    cin.getline(input,10);   // this function takes 3 paramaters, 3rd one is optional
    cout<<input;
    // output = hello world
    cin.getline(input,4);
    cout<<input;
    // output = hel

    return 0;
}