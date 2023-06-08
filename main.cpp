# include <iostream>  //pre processor 
using namespace std;
int main()
{
    cout<<"hello world"<<endl; // <<endl is for new line character
    cout<<"nakul bhar"<<endl;

    int a;  //variable declare
    a = 23;
    cout<<"number is "<<a<<endl; 
    // number is 23

    float const score = 34.23; //const is used as for value fix,does not change value of score
    //score = 45.6;
    cout<<"the score is "<<score<<endl;

    int x, y;
    cout<<"enter first number "<<endl;
    cin>>x;  //taking input from user

    cout<<"enter second number "<<endl;
    cin>>y;

    return 0;
}