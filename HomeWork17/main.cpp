#include <iostream>
#include "Bounded/bounded.h"

using namespace std;

int main()
{
     Bounded aWrong(10);
     string aWrongStr = aWrong;
     cout << "aWrong = " << aWrongStr << endl;

     Bounded aWrongNegative(-5);
     string aWrongNegativeStr = aWrongNegative;
     cout << "aWrongNegative = " << aWrongNegativeStr << endl;

     Bounded bWrong(10.5);
     string bWrongStr = bWrong;
     cout << "bWrong = " << bWrongStr << endl;

     Bounded bWrongNegative(-5.3);
     string bWrongNegativeStr = bWrongNegative;
     cout << "bWrongNegative = " << bWrongNegativeStr << endl;

     Bounded c;
     string cStr = c;
     cout << "c with default constructor = " << cStr << endl;

     Bounded d(0.5);
     string dStr = d;
     cout << "d with double constructor = " << dStr << endl;

     Bounded dNegative(-0.75);
     string dNegativeStr = dNegative;
     cout << "d with double constructor = " << dNegativeStr << endl;

     Bounded i(1);
     string iStr = i;
     cout << "i with int constructor = " << iStr << endl;

     Bounded iNegative(-1);
     string iNegativeStr = iNegative;
     cout << "i with int constructor = " << iNegativeStr << endl;

     int asInt = aWrong;
     cout << "aWrong as int = " << asInt << endl;

     bool asBool = c;
    string asBoolStr = asBool ? "true" : "false";
     cout << "c as bool = " << asBoolStr << endl;

     bool dAsBool = d;
    string dAsBoolStr = dAsBool ? "true" : "false";
     cout << "d as bool = " << dAsBoolStr << endl;


     cout << "====================SUM===========================" << endl;    
     Bounded sumResult = d + dNegative;
     string sumResultStr = sumResult;
     cout << "sumResult | d = " << dStr << " + dNegative = " << dNegativeStr << " = " << sumResultStr << endl;
    
     cout << "====================SUBSTRACTION===========================" << endl;    
     Bounded substractResult = d - dNegative;
     string substractResultStr = substractResult;
     cout << "substractResult | d = " << dStr << " - dNegative = " << dNegativeStr << " = " << substractResultStr << endl;

      cout << "====================MULTIPLICATION===========================" << endl;    
     Bounded multiplyResult = d * dNegative;
     string multiplyResultStr = multiplyResult;
     cout << "multiplyResult | d = " << dStr << " * dNegative = " << dNegativeStr << " = " << multiplyResultStr << endl;

      cout << "====================DIVISION===========================" << endl;    
     Bounded divideResult = d / dNegative;
     string divideResultStr = divideResult;
     cout << "divideResult | d = " << dStr << " / dNegative = " << dNegativeStr << " = " << divideResultStr << endl;

     return 0;
}