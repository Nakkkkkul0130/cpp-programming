#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //---------sum of array elements----------

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
       cout<<"enter the value of "<< i <<"th student: ";
       cin>>arr[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<"sum is: "<<sum<<endl;

    //--------finding largest elements in array for number greater than 0-------

    int x;
    cout << "enter the value of x: ";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter the " << i << " th value: ";
        cin >> arr[i];
    }

    int largest = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest number is: " << largest << endl;

    return 0;
}