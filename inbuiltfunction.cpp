// -----------------inbuilt functions will be studied here---------------
// 1) strlen = to find length of string till null character 
// 2) strcmp = to compare two strings and after compare return 0 or -1 not boolean value
//    2.1) 0 means equal and -1 means not equal
// 3) strcpy = to copy one string to another
// 4) strncpy = to copy upto nth character
// 5) strcat = for concatenate means in a series one after other

#include <iostream>
#include <cstring>       // header files for inbuilt functions
using namespace std;

// 1)
 int main()
 {
    char str1[100];
    cout<<"enter the value of str1: ";
    cin>>str1;
    int len = strlen(str1);     // string length
    cout<<"length: "<<len<<endl;
    return 0;
 }

// 2)
int main()
{
    char str1[100];
    char str2[100];
    cout<<"enter the value of str1 and str2: ";
    cin>>str1>>str2;
    int cmp = strcmp(str1,str2);
    cout<<"compare: "<<cmp<<endl;
}

// 3)
int main()
{
    char str1[100] = "nakul";
    char str2[100] = "minku";
    cout<<"before copying:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    
    strcpy(str1,str2);

    cout<<"after copying:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

}
// 4)
int main()
{
    char str1[100] = "nakul";
    char str2[100] = "minku";
    cout<<"before n copying:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    
    strncpy(str1,str2,3);

    cout<<"after n copying:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

}

// 5)
int main()
{
    char str1[100] = "nakul";
    char str2[100] = "minku";
    cout<<"before concatenate:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
    
    strcat(str1,str2);

    cout<<"after concatenate:"<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;
}


