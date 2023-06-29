# include <iostream>
using namespace std;
int main()
{
    int i, fact=1, number;
    cout<<"enter the number: ";
    cin>>number;
    if (number<0)
    {
        cout<<"factorial of number less than 0 does not exist!";
    }
    else if (number==0)
    {
        cout<<"factorial of 0 is 1 ";
    }
    else 
    {
        for (i=1;i<=number;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial of "<< number<<" "<<"is: "<<fact;
    }

}