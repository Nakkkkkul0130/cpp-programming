# include <iostream>
using namespace std;
int main()
{
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
}