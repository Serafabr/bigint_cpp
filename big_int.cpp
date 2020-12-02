// Big Integer data type

#include <iostream>

using namespace std;

class BigInteger {
    public:
    // Basic Operators
    BigInteger operator+(const BigInteger&);
    BigInteger operator-(const BigInteger&);
    BigInteger operator*(const BigInteger&);
    BigInteger operator/(const BigInteger&);
    // Advanced Operators
    BigInteger root(int);
    BigInteger sqrt();
    BigInteger pow(int);
    
    private:
    
};

// Overload cout << operation
ostream& operator<<(ostream& os, BigInteger const& number) {}