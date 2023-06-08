# include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout<<"enter first number: ";
    cin>>a;

    cout<<"enter second number: ";
    cin>>b;
    
    cout<<"sum is: "<<sum(a,b);
    return 0;
}