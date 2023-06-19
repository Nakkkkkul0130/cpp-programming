#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //---------sum of array elements----------

    // int n;
    // cout<<"enter the value of n: ";
    // cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++)
    // {
    //    cout<<"enter the value of "<< i <<"th student: ";
    //    cin>>arr[i];
    // }
    // int sum = 0;
    // for (int i=0;i<n;i++)
    // {
    //     sum += arr[i];
    // }
    // cout<<"sum is: "<<sum<<endl;

    //--------finding largest elements in array-------

    // int x;
    // cout << "enter the value of x: ";
    // cin >> x;
    // int arr[x];
    // for (int i = 0; i < x; i++)
    // {
    //     cout << "enter the " << i << " th value: ";
    //     cin >> arr[i];
    // }

    // int largest = INT16_MIN;
    // for (int i = 0; i < x; i++)
    // {
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout << "largest number is: " << largest << endl;

    //--------finding smallest number in array elements---------
    // int x;
    // cout << "enter the value of x: ";
    // cin >> x;
    // int arr[x];
    // for (int i = 0; i < x; i++)
    // {
    //     cout << "enter the " << i << " th value: ";
    //     cin >> arr[i];
    // }
    // int smallest = INT16_MAX;
    // for (int i=0;i<x;i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    // }
    // cout<<"smallest number is: "<<smallest<<endl;


    // return 0;

    //----------swapping of two numbers--------
    int a, b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"now value of a is: "<<a<<endl;
    cout<<"now value of b is: "<<b;

    return 0;
    
}