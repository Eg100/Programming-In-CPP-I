/*
CH08-320142
Vector.h
Taiyr Begeyev
t.begeyev@jacobs-university.de
*/

using namespace std;

class Vector
{
private:
    int size;
    double* vector;
public:
    //default constructor
    Vector();
    //constructor for setting properties
    Vector(const int, const double*);
    //copy constructor
    Vector(const Vector&);
    //desctructor
    ~Vector();

    //setter methods
    void setSize(const int newsize);
    void setVector(const double* newvector);

    //getter methods
    int getSize();
    double* getVector();

    //other methods
    void print() const; //printing the components of the Vector
    //calculating vectors
    double norm();
    Vector sum(const Vector) const;
    Vector difference(const Vector) const;
    Vector scalar_product(const Vector) const;
};
