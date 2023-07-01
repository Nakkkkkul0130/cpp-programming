// -----------------inbuilt functions will be studied here---------------
// 1) strlen = to find length of string till null character 






#include <iostream>
#include <cstring>       // header files for inbuilt functions
using namespace std;
int main()
{
    char str1[100];
    cout<<"enter the value of str1: ";
    cin>>str1;
    int len = strlen(str1);     // string length
    cout<<"length: "<<len<<endl;
    return 0;
}