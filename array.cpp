# include <iostream>
using namespace std;
int main()
{
    // -------------------1-D ARRAY------------------
    int arr[] = {3,6,4};
// index value = 0,1,2
    cout<<arr[2];
    // output = 4


   // ------using for loop-----------
    int marks[6];
    for (int i=0;i<6;i++)
    {
        cout<<"enter marks of "<<i<<"th student: ";
        cin>>marks[i];
    } 
    for (int i=0;i<6;i++)
    {
        cout<<"marks of "<<i<<"th student is: "<<marks[i]<<endl; // storing the value of array at its position
    }

    //---------------2-D ARRAY-------------
    int arr2d[2][3] = {{1,2,3},{4,5,6}};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"value at "<<i<<" and "<<j<<" is "<<arr2d[i][j]<<endl;
        }
    }
    
}