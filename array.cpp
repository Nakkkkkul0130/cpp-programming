#include <iostream>
using namespace std;
int main()
{
    // -------------------1-D ARRAY------------------

// 1.)
    int arr[5] = {3, 6, 4}; // initialising the array
    index value = 0, 1, 2 cout << arr[2] << " " << arr[0] << " " << arr[1] << endl;
    // output = 4 3 6 00
    cout << sizeof(arr);
    // output = 20

// 2.)
    int arr[10] = {2, 4, 3, 6};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";

        // output = 2 4 3 6 0 0 0 0 0
    }
    cout << endl;

// 3.)
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";

        // output = GARBAGE VALUE
    }
    cout << endl;

    // ------using for loop-----------
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter marks of " << i << "th student: ";
        cin >> marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "marks of " << i << "th student is: " << marks[i] << endl; // storing the value of array at its position
    }

    //---------------2-D ARRAY-------------
    int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "value at " << i << " and " << j << " is " << arr2d[i][j] << endl;
        }
    }
}