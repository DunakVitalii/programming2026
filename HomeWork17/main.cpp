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

          cout << "====================DIVISION BY ZERO===========================" << endl;
     Bounded divideByZeroResult = d / 0;
     string divideByZeroResultStr = divideByZeroResult;
     cout << "divideByZeroResult | d = " << dStr << " / 0 = " << divideByZeroResultStr << endl;

     cout << "====================ADDITION===========================" << endl;
     Bounded additionWithIntResult = i + 1;
     string additionWithIntResultStr = additionWithIntResult;
     cout << "additionWithIntResult | d = " << iStr << " + 1 = " << additionWithIntResultStr << endl;

     cout << "====================SUBSTRACTION===========================" << endl;
     Bounded substractionWithIntResult = i - 1;
     string substractionWithIntResultStr = substractionWithIntResult;
     cout << "substractionWithIntResult | d = " << iStr << " - 1 = " << substractionWithIntResultStr << endl;

     cout << "====================MULTIPLICATION===========================" << endl;
     Bounded multiplicationWithIntResult = i * 2;
     string multiplicationWithIntResultStr = multiplicationWithIntResult;
     cout << "multiplicationWithIntResult | d = " << iStr << " * 2 = " << multiplicationWithIntResultStr << endl;

     cout << "====================DIVISION===========================" << endl;
     Bounded divisionWithIntResult = i / 2;
     string divisionWithIntResultStr = divisionWithIntResult;
     cout << "divisionWithIntResult | d = " << iStr << " / 2 = " << divisionWithIntResultStr << endl;

     cout << "====================DIVISION BY ZERO===========================" << endl;
     Bounded divisionByZeroWithIntResult = i / 0;
     string divisionByZeroWithIntResultStr = divisionByZeroWithIntResult;
     cout << "divisionByZeroWithIntResult | d = " << iStr << " / 0 = " << divisionByZeroWithIntResultStr << endl;

     cout << "====================ADDITION WITH DOUBLE===========================" << endl;
     Bounded additionWithDoubleResult = d + 0.5;
     string additionWithDoubleResultStr = additionWithDoubleResult;
     cout << "additionWithDoubleResult | d = " << dStr << " + 0.5 = " << additionWithDoubleResultStr << endl;

     cout << "====================SUBSTRACTION WITH DOUBLE===========================" << endl;
     Bounded substractionWithDoubleResult = d - 0.5;
     string substractionWithDoubleResultStr = substractionWithDoubleResult;
     cout << "substractionWithDoubleResult | d = " << dStr << " - 0.5 = " << substractionWithDoubleResultStr << endl;

     cout << "====================MULTIPLICATION WITH DOUBLE===========================" << endl;
     Bounded multiplicationWithDoubleResult = d * 0.5;
     string multiplicationWithDoubleResultStr = multiplicationWithDoubleResult;
     cout << "multiplicationWithDoubleResult | d = " << dStr << " * 0.5 = " << multiplicationWithDoubleResultStr << endl;

     cout << "====================DIVISION WITH DOUBLE===========================" << endl;
     Bounded divisionWithDoubleResult = d / 0.5;
     string divisionWithDoubleResultStr = divisionWithDoubleResult;
     cout << "divisionWithDoubleResult | d = " << dStr << " / 0.5 = " << divisionWithDoubleResultStr << endl;

     cout << "====================DIVISION BY ZERO WITH DOUBLE===========================" << endl;
     Bounded divisionByZeroWithDoubleResult = d / 0.0;
     string divisionByZeroWithDoubleResultStr = divisionByZeroWithDoubleResult;
     cout << "divisionByZeroWithDoubleResult | d = " << dStr << " / 0.0 = " << divisionByZeroWithDoubleResultStr << endl;

     cout << "====================ADDITION WITH DOUBLE ON LEFT SIDE===========================" << endl;
     Bounded additionWithDoubleOnLeftSideResult = 0.5 + d;
     string additionWithDoubleOnLeftSideResultStr = additionWithDoubleOnLeftSideResult;
     cout << "additionWithDoubleOnLeftSideResult | 0.5 + d = " << additionWithDoubleOnLeftSideResultStr << endl;

     cout << "====================SUBSTRACTION WITH DOUBLE ON LEFT SIDE===========================" << endl;
     Bounded substractionWithDoubleOnLeftSideResult = 0.5 - d;
     string substractionWithDoubleOnLeftSideResultStr = substractionWithDoubleOnLeftSideResult;
     cout << "substractionWithDoubleOnLeftSideResult | 0.5 - d = " << substractionWithDoubleOnLeftSideResultStr << endl;

     cout << "====================MULTIPLICATION WITH DOUBLE ON LEFT SIDE===========================" << endl;
     Bounded multiplicationWithDoubleOnLeftSideResult = 0.5 * d;
     string multiplicationWithDoubleOnLeftSideResultStr = multiplicationWithDoubleOnLeftSideResult;
     cout << "multiplicationWithDoubleOnLeftSideResult | 0.5 * d = " << multiplicationWithDoubleOnLeftSideResultStr << endl;

     cout << "====================DIVISION WITH DOUBLE ON LEFT SIDE===========================" << endl;
     Bounded divisionWithDoubleOnLeftSideResult = 0.5 / d;
     string divisionWithDoubleOnLeftSideResultStr = divisionWithDoubleOnLeftSideResult;
     cout << "divisionWithDoubleOnLeftSideResult | 0.5 / d = " << divisionWithDoubleOnLeftSideResultStr << endl;

     cout << "====================DIVISION BY ZERO WITH DOUBLE ON LEFT SIDE===========================" << endl;
     Bounded divisionByZeroWithDoubleOnLeftSideResult = 0.5 / 0.0;
     string divisionByZeroWithDoubleOnLeftSideResultStr = divisionByZeroWithDoubleOnLeftSideResult;
     cout << "divisionByZeroWithDoubleOnLeftSideResult | 0.5 / 0.0 = " << divisionByZeroWithDoubleOnLeftSideResultStr << endl;

     cout << "====================ADDITION WITH INT ON LEFT SIDE===========================" << endl;
     Bounded additionWithIntOnLeftSideResult = 1 + i;
     string additionWithIntOnLeftSideResultStr = additionWithIntOnLeftSideResult;
     cout << "additionWithIntOnLeftSideResult | 1 + i = " << additionWithIntOnLeftSideResultStr << endl;

     cout << "====================SUBSTRACTION WITH INT ON LEFT SIDE===========================" << endl;
     Bounded substractionWithIntOnLeftSideResult = 1 - i;
     string substractionWithIntOnLeftSideResultStr = substractionWithIntOnLeftSideResult;
     cout << "substractionWithIntOnLeftSideResult | 1 - i = " << substractionWithIntOnLeftSideResultStr << endl;

     cout << "====================MULTIPLICATION WITH INT ON LEFT SIDE===========================" << endl;
     Bounded multiplicationWithIntOnLeftSideResult = 2 * i;
     string multiplicationWithIntOnLeftSideResultStr = multiplicationWithIntOnLeftSideResult;
     cout << "multiplicationWithIntOnLeftSideResult | 2 * i = " << multiplicationWithIntOnLeftSideResultStr << endl;

     cout << "====================DIVISION WITH INT ON LEFT SIDE===========================" << endl;
     Bounded divisionWithIntOnLeftSideResult = 2 / i;
     string divisionWithIntOnLeftSideResultStr = divisionWithIntOnLeftSideResult;
     cout << "divisionWithIntOnLeftSideResult | 2 / i = " << divisionWithIntOnLeftSideResultStr << endl;

     cout << "====================DIVISION BY ZERO WITH INT ON LEFT SIDE===========================" << endl;
     Bounded divisionByZeroWithIntOnLeftSideResult = 2 / 0;
     string divisionByZeroWithIntOnLeftSideResultStr = divisionByZeroWithIntOnLeftSideResult;
     cout << "divisionByZeroWithIntOnLeftSideResult | 2 / 0 = " << divisionByZeroWithIntOnLeftSideResultStr << endl;

     cout << "====================COMPARISON OPERATORS===========================" << endl;
     bool isEqual = d == dNegative;
     cout << "isEqual | d == dNegative = " << isEqual << endl;

     cout << "====================COMPARISON WITH INT===========================" << endl;
     bool isEqualWithInt = i == 1;
     cout << "isEqualWithInt | i == 1 = " << isEqualWithInt << endl;

     cout << "====================COMPARISON WITH DOUBLE===========================" << endl;
     bool isEqualWithDouble = d == 0.5;
     cout << "isEqualWithDouble | d == 0.5 = " << isEqualWithDouble << endl;

     cout << "====================COMPARISON WITH BOUNDED===========================" << endl;
     bool isEqualWithBounded = d == Bounded(0.5);
     cout << "isEqualWithBounded | d == Bounded(0.5) = " << isEqualWithBounded << endl;

     cout << "====================COMPARISON WITH BOUNDED NEGATIVE===========================" << endl;
     bool isEqualWithBoundedNegative = d == Bounded(-0.75);
     cout << "isEqualWithBoundedNegative | d == Bounded(-0.75) = " << isEqualWithBoundedNegative << endl;

     cout << "====================COMPARISON WITH BOUNDED WITH INT VALUE===========================" << endl;
     bool isEqualWithBoundedWithIntValue = d == Bounded(0);
     cout << "isEqualWithBoundedWithIntValue | d == Bounded(0) = " << isEqualWithBoundedWithIntValue << endl;

     cout << "====================COMPARISON WITH BOUNDED WITH DOUBLE VALUE===========================" << endl;
     bool isEqualWithBoundedWithDoubleValue = d == Bounded(0.5);
     cout << "isEqualWithBoundedWithDoubleValue | d == Bounded(0.5) = " << isEqualWithBoundedWithDoubleValue << endl;

     cout << "====================COMPARISON WITH INT===========================" << endl;
     bool isEqualWithInt = d == 0.5;
     cout << "isEqualWithInt | d == 0.5 = " << isEqualWithInt << endl;

     cout << "====================COMPARISON WITH DOUBLE===========================" << endl;
     bool isEqualWithDouble = d == 0.5;
     cout << "isEqualWithDouble | d == 0.5 = " << isEqualWithDouble << endl;

     cout << "====================COMPARISON WITH DOUBLE ON LEFT SIDE===========================" << endl;
     bool isEqualWithDoubleOnLeftSide = d == 0.5;
     cout << "isEqualWithDoubleOnLeftSide | 0.5 == d = " << isEqualWithDoubleOnLeftSide << endl;

     cout << "====================COMPARISON WITH INT ON LEFT SIDE===========================" << endl;
     bool isEqualWithIntOnLeftSide = d == 0.5;
     cout << "isEqualWithIntOnLeftSide | 0.5 == d = " << isEqualWithIntOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOUNDED ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoundedOnLeftSide = d == Bounded(0.5);
     cout << "isEqualWithBoundedOnLeftSide | Bounded(0.5) == d = " << isEqualWithBoundedOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOUNDED NEGATIVE ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoundedNegativeOnLeftSide = d == Bounded(-0.75);
     cout << "isEqualWithBoundedNegativeOnLeftSide | Bounded(-0.75) == d = " << isEqualWithBoundedNegativeOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOUNDED WITH INT VALUE ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoundedWithIntValueOnLeftSide = d == Bounded(0);
     cout << "isEqualWithBoundedWithIntValueOnLeftSide | Bounded(0) == d = " << isEqualWithBoundedWithIntValueOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOUNDED WITH DOUBLE VALUE ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoundedWithDoubleValueOnLeftSide = d == Bounded(0.5);
     cout << "isEqualWithBoundedWithDoubleValueOnLeftSide | Bounded(0.5) == d = " << isEqualWithBoundedWithDoubleValueOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOOL===========================" << endl;
     bool isEqualWithBool = d == true;
     cout << "isEqualWithBool | d == true = " << isEqualWithBool << endl;

     cout << "====================COMPARISON WITH BOOL FALSE===========================" << endl;
     bool isEqualWithBoolFalse = d == false;
     cout << "isEqualWithBoolFalse | d == false = " << isEqualWithBoolFalse << endl;

     cout << "====================COMPARISON WITH BOOL ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoolOnLeftSide = d == true;
     cout << "isEqualWithBoolOnLeftSide | true == d = " << isEqualWithBoolOnLeftSide << endl;

     cout << "====================COMPARISON WITH BOOL FALSE ON LEFT SIDE===========================" << endl;
     bool isEqualWithBoolFalseOnLeftSide = d == false; 
     cout << "isEqualWithBoolFalseOnLeftSide | false == d = " << isEqualWithBoolFalseOnLeftSide << endl;

     return 0;
}