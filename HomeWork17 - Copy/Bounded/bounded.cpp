#include <iostream>
#include "bounded.h"
// Bounded::Bounded() : intValue(0), doubleValue(0.0) {}

Bounded::Bounded()
{
    this->intValue = 0;
    this->doubleValue = 0.0;
}

Bounded::Bounded(int value)
{
    this->intValue = check(value);
    this->doubleValue = check(static_cast<double>(value));    
}

Bounded::Bounded(double value)
{
    this->intValue = check(static_cast<int>(value));
    this->doubleValue = check(value);
}

Bounded::Bounded(int intValue, double doubleValue)
{
    this->intValue = check(intValue);
    this->doubleValue = check(doubleValue);
    std::cout << "Bounded(int intValue, double doubleValue) constructor called with intValue = " << intValue << " and doubleValue = " << doubleValue << std::endl;
}

int Bounded::check(int value)
{
    if (value <= kMin) {
        return kMin;
    }
    if (value >= kMax) {
        return kMax;
    }
    return value;
}

double Bounded::check(double value)
{
    if (value <= kMin) {
        return kMin;
    }
    if (value >= kMax) {
        return kMax;
    }
    return value;
}

Bounded::operator int() const
{
    return intValue;
}

Bounded::operator double() const
{
    return doubleValue;
}

Bounded::operator bool() const
{
    return intValue != 0 || doubleValue != 0.0;
}

Bounded::operator std::string() const
{
    return "Bounded(intValue=" + std::to_string(intValue) + ", doubleValue=" + std::to_string(doubleValue) + ")";
}

Bounded Bounded::operator+ (const Bounded& rhs) const
{
    Bounded result(this->intValue + rhs.intValue, this->doubleValue + rhs.doubleValue);
    return result;
}

Bounded Bounded::operator- (const Bounded& rhs) const
{
    Bounded result(intValue - rhs.intValue, doubleValue - rhs.doubleValue);
    return result;
}

Bounded Bounded::operator* (const Bounded& rhs) const
{
    Bounded result(intValue * rhs.intValue, doubleValue * rhs.doubleValue);
    return result;
}

double Bounded::operator/ (const Bounded& rhs) const
{
    // int divisionByZeroCheckForIntValue = rhs.intValue != 0 ? intValue / rhs.intValue : 0;
    if(rhs.intValue == 0 || rhs.doubleValue == 0.0) {
        std::cerr << "Error: Division by zero in Bounded::operator/ (const Bounded& rhs) const" << std::endl;
        return 0.0; // or throw an exception
    }
    Bounded result(intValue / rhs.intValue, doubleValue / rhs.doubleValue);
    return result.doubleValue;
}


