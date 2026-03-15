#include <string>
#include <iostream>

class Bounded 
{
private:
    int intValue;
    double doubleValue;

    static int check(int value);
    static double check(double value);

public:
    static constexpr int kMin = -1;
    static constexpr int kMax = 1;
    Bounded(); // done
    Bounded(int value); // done
    Bounded(double value); // done
    Bounded (int intValue, double doubleValue); // done

    operator int() const; // done
    operator bool() const; // done
    operator std::string() const; // done
    operator double() const; // done

    Bounded operator+ (const Bounded& rhs) const; // done
    Bounded operator- (const Bounded& rhs) const;  // done
    Bounded operator* (const Bounded& rhs) const;  // done
    double operator/ (const Bounded& rhs) const;  // done

    Bounded operator+ (const int rhs) const; // done
    Bounded operator- (const int rhs) const; // done
    Bounded operator* (const int rhs) const; // done
    double operator/ (const int rhs) const; // done

    Bounded operator+ (const double rhs) const; // done
    Bounded operator- (const double rhs) const; // done
    Bounded operator* (const double rhs) const; // done
    double operator/ (const double rhs) const; // done

    Bounded& operator+= (const Bounded& rhs); // done
    Bounded& operator-= (const Bounded& rhs); // done   
    Bounded& operator*= (const Bounded& rhs); // done

    Bounded& operator+= (const int rhs); // done
    Bounded& operator-= (const int rhs); // done
    Bounded& operator*= (const int rhs); // done

    Bounded& operator+= (const double rhs); // done
    Bounded& operator-= (const double rhs); // done
    Bounded& operator*= (const double rhs); // done

    bool operator== (const Bounded& rhs) const; //done
    bool operator!= (const Bounded& rhs) const; //done
    bool operator< (const Bounded& rhs) const; //done

    bool operator== (const int rhs) const; //done
    bool operator!= (const int rhs) const; //done
    bool operator< (const int rhs) const; //done

    bool operator== (const double rhs) const; //done
    bool operator!= (const double rhs) const; //done
    bool operator< (const double rhs) const; //done

    friend Bounded operator+ (const int lhs, const Bounded& rhs);
    friend Bounded operator- (const int lhs, const Bounded& rhs);
    friend Bounded operator* (const int lhs, const Bounded& rhs);
    friend double operator/ (const int lhs, const Bounded& rhs);

    friend Bounded operator+ (const double lhs, const Bounded& rhs);
    friend Bounded operator- (const double lhs, const Bounded& rhs);
    friend Bounded operator* (const double lhs, const Bounded& rhs);
    friend double operator/ (const double lhs, const Bounded& rhs);
};   