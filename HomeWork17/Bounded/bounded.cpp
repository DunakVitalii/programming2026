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

Bounded Bounded::operator+ (const int rhs) const
{
    Bounded result(this->intValue + rhs, this->doubleValue + rhs);
    return result;
}

Bounded Bounded::operator- (const int rhs) const
{
    Bounded result(this->intValue - rhs, this->doubleValue - rhs);
    return result;
}

Bounded Bounded::operator* (const int rhs) const
{
    Bounded result(this->intValue * rhs, this->doubleValue * rhs);
    return result;
}

double Bounded::operator/ (const int rhs) const
{
    if(rhs == 0) {
        std::cerr << "Error: Division by zero in Bounded::operator/ (const int rhs) const" << std::endl;
        return 0.0; // or throw an exception
    }
    Bounded result(this->intValue / rhs, this->doubleValue / rhs);
    return result.doubleValue;
}

Bounded Bounded::operator+ (const double rhs) const
{
    Bounded result(this->intValue + static_cast<int>(rhs), this->doubleValue + rhs);
    return result;
}

Bounded Bounded::operator- (const double rhs) const
{
    Bounded result(this->intValue - static_cast<int>(rhs), this->doubleValue - rhs);
    return result;
}

Bounded Bounded::operator* (const double rhs) const
{
    Bounded result(this->intValue * static_cast<int>(rhs), this->doubleValue * rhs);
    return result;
}

double Bounded::operator/ (const double rhs) const
{
    if(rhs == 0.0) {
        std::cerr << "Error: Division by zero in Bounded::operator/ (const double rhs) const" << std::endl;
        return 0.0; // or throw an exception
    }
    Bounded result(this->intValue / static_cast<int>(rhs), this->doubleValue / rhs);
    return result.doubleValue;
}

Bounded& Bounded::operator+= (const Bounded& rhs)
{
    this->intValue += rhs.intValue;
    this->doubleValue += rhs.doubleValue;
    return *this;
}

Bounded& Bounded::operator-= (const Bounded& rhs)
{
    this->intValue -= rhs.intValue;
    this->doubleValue -= rhs.doubleValue;
    return *this;
}

Bounded& Bounded::operator*= (const Bounded& rhs)
{
    this->intValue *= rhs.intValue;
    this->doubleValue *= rhs.doubleValue;
    return *this;
}

Bounded& Bounded::operator+= (const int rhs)
{
    this->intValue += rhs;
    return *this;
}

Bounded& Bounded::operator-= (const int rhs)
{
    this->intValue -= rhs;
    return *this;
}

Bounded& Bounded::operator*= (const int rhs)
{
    this->intValue *= rhs;
    return *this;
}

Bounded& Bounded::operator+= (const double rhs)
{
    this->doubleValue += rhs;
    return *this;
}

Bounded& Bounded::operator-= (const double rhs)
{
    this->doubleValue -= rhs;
    return *this;
}

Bounded& Bounded::operator*= (const double rhs)
{
    this->doubleValue *= rhs;
    return *this;
}

bool Bounded::operator== (const Bounded& rhs) const
{
    return this->intValue == rhs.intValue && this->doubleValue == rhs.doubleValue;
}

bool Bounded::operator!= (const Bounded& rhs) const
{
    return !(*this == rhs);
}

bool Bounded::operator< (const Bounded& rhs) const
{
    if (this->intValue < rhs.intValue) {
        return true;
    }
    if (this->intValue > rhs.intValue) {
        return false;
    }
    return this->doubleValue < rhs.doubleValue;
}

bool Bounded::operator== (const int rhs) const
{
    return this->intValue == rhs && this->doubleValue == 0.0;
}

bool Bounded::operator!= (const int rhs) const
{
    return !(*this == rhs);
}

bool Bounded::operator< (const int rhs) const
{
    if (this->intValue < rhs) {
        return true;
    }
    if (this->intValue > rhs) {
        return false;
    }
    return this->doubleValue < 0.0;
}

bool Bounded::operator== (const double rhs) const
{
    return this->intValue == static_cast<int>(rhs) && this->doubleValue == rhs;
}

bool Bounded::operator!= (const double rhs) const
{
    return !(*this == rhs);
}

bool Bounded::operator< (const double rhs) const
{
    if (this->intValue < static_cast<int>(rhs)) {
        return true;
    }
    if (this->intValue > static_cast<int>(rhs)) {
        return false;
    }
    return this->doubleValue < rhs;
}

Bounded operator+ (const int lhs, const Bounded& rhs)
{
    return rhs + lhs; // Reuse the member operator+
}

Bounded operator- (const int lhs, const Bounded& rhs)
{
    return Bounded(lhs) - rhs; // Create a temporary Bounded from lhs and use the member operator-
}

Bounded operator* (const int lhs, const Bounded& rhs)
{
    return rhs * lhs; // Reuse the member operator*
}

double operator/ (const int lhs, const Bounded& rhs)
{
    if(rhs.intValue == 0 || rhs.doubleValue == 0.0) {
        std::cerr << "Error: Division by zero in operator/ (const int lhs, const Bounded& rhs)" << std::endl;
        return 0.0; // or throw an exception
    }
    return Bounded(lhs) / rhs; // Create a temporary Bounded from lhs and use the member operator/
}