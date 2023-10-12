double sqrt(double); // the square root function takes a double and returns a double
class Vector {
public:
Vector(int s);
double& operator[](int i);
int size();
private:
double∗ elem; // elem points to an array of sz doubles
int sz;
};