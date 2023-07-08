#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abc";   // statically
    cout<<s<<endl;

    string s2;          // another method for statically 
    s2 = "def";
    cout<<s2<<endl;

    string *sp = new string;    // dynamically 
    *sp = "nakul";
    cout<<sp<<endl;             // it will print address
    cout<<*sp<<endl;            // it will print value

   // if we have to store multiple string we have to use vector string
        vector<string> v;
        v.push_back(s);              // for pushing one element 
        v.push_back("hello");
        for (int i=0;i<=v.size();i++)    // for printing the whole content
        {
            cout<<v[i]<<endl;
            sort(v[i].begin(),v[i].end());
            cout<<v[i]<<endl;
        }

    string s4;
    //getline(cin, s4);   // taking input in string
    cout<<s4<<endl;

    string s5 = s + s2;      // addition of two strings
    cout<<s5<<endl;
    cout<<s5.size()<<endl;   // size of s5
    cout<<s5.substr(3)<<endl;
    cout<<s5.find("abc")<<endl;   // this will return int value basically at which index abc is present

    // convert integer into string
    int a = 123;
    string s6 = to_string(a);
    s6.push_back('4');          // insert string in a element
    cout<<s6<<endl;
    return 0;
}