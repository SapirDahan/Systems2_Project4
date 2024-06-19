#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
#include <sstream>

template <typename RealType, typename ImagType>
class Complex {
public:
    using real_type = RealType;
    using imag_type = ImagType;

private:
    RealType real;
    ImagType imag;

public:
    // Constructors
    Complex();
    Complex(RealType r, ImagType i);

    // Convert to string
    std::string to_string() const;

    // Calculate ASCII sum of the string representation
    unsigned int get_ascii_value() const;

};

#endif // COMPLEX_HPP
