#include <iostream>
#include <random>
#include "GoldenOven/Hole.h"
#include "GoldenOven/Oven.h"

using namespace std;

int main()
{    
     int barsCounter = 100;
     Hole hole(3, 4);
     Oven oven(10, 12, 14, hole);
     oven.setMeltingSpeed(30);

     // Bar bar(4, 5, 3); // конструктор з заданими розмірами зливків
     while (barsCounter > 0) {
          barsCounter--;
          cout << "barsCounter [" << barsCounter << "]" << endl;
          cout << "====================================================" << endl;

          Bar bar; // конструктор по замовченню з генерацією випадкових розмірів зливку

          int barVolume = bar.x() * bar.y() * bar.z();
          int barWeight = 19320 * barVolume;

          string fitResult = oven.fitInOven(bar);
          cout << "Fit result: " << fitResult << endl;
          int freeVolume = oven.getMaxVolume() - oven.getVolume();
          if (fitResult != "DidNotFit") {
               if ( freeVolume > 0 ) {
                    oven.setVolume(barVolume);
                    cout << "Current Volume = " << oven.getVolume() << endl;
               } else {
                    cout << "SHOW STATS. How Many Melted. Pour out the molten metal with MeltingSpeed " << oven.getVolume() << endl;
               }
                         
          }else{
               cout << "SHOW STATS. Did NOT fit Counter" << endl;
               cout << "SHOW STATS. Did NOT fit in KG (barVolume * density)" << endl;
          }
          cout << "=========================Max Volume = " << oven.getMaxVolume() << "===========================" << endl;
     }
    
     
     
     return 0;
}