/*
CH08-320142
Complex.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

using namespace std;

class Complex
{
private:
    double real;
    double imaginary;
public:
    //default constructor
    Complex();
    //constructor for setting real and imaginary
    Complex(double, double);
    //copy constructor
    Complex(Complex& );
    //destructor
    ~Complex();

    //setter methods
    void setReal(double newreal);
    void setImaginary(double newimaginary);

    //getter methods
    double getReal();
    double getImaginary();

    //service method
    void print();

    //other methods
    void conjugate(); //finding Conjugate
    Complex add(Complex complex);
    Complex sub(Complex complex);
    Complex mult(Complex complex);
};
