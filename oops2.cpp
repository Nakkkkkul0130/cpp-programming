#include <iostream>
using namespace std;

class fraction{
    private:
        int numerator;
        int denominator;

    public:
        fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void print()
        {
            cout<<numerator<<"/"<<denominator<<endl;;
        }
        void add(fraction const &f2)   // we use const and refernce variable for not apply copy constructor here because copy constrcutor is time consuming here
        {
            int lcm = this->denominator * f2.denominator;    // using "this" is optional because simple denominator represent f1
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + y*f2.numerator;

            // store result in f1

            this->numerator = num;
            this->denominator = lcm;

            simplify();
        }

        void multiply(fraction const &f2)
        {
            numerator = numerator * f2.numerator;
            denominator = denominator * f2.denominator;
            simplify();
        }
        void simplify()
        {
            int gcd = 1;
            int j = min(this->numerator, this->denominator);
            for (int i=1;i<=j;i++)
            {
                if(numerator%i==0 && denominator%i==0)
                {
                    gcd = i;
                }
            }
            
            // simplify 
        numerator = numerator/gcd;
        denominator = denominator/gcd;
        }
        

};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
    return 0;
}