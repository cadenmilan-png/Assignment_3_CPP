#include <iostream>

using namespace std;

#include "Pet.h"

int main(int argc, char **argv) {

   Pet petOne;
   Pet petTwo;

   petOne.setName("Coco");
   petOne.setAgeYears(8);
   petOne.setType("dog");
   petOne.setWeight(100.0);

   petTwo.setName("Larry");
   petTwo.setAgeYears(12);
   petTwo.setType("cat");
   petTwo.setWeight(58.9);

   cout << "First Pet's Info:" << endl;
   cout << "Pet's name: " << petOne.getName() << endl;
   cout << "Pet's age: " << petOne.getAgeYears() << endl;
   cout << "What kind of pet: " << petOne.getType() << endl;
   cout << "Pet's weight: " << petOne.getWeight() << endl;

   cout << "Second Pet's Info:" << endl;
   cout << "Pet's name: " << petTwo.getName() << endl;
   cout << "Pet's age: " << petTwo.getAgeYears() << endl;
   cout << "What kind of pet: " << petTwo.getType() << endl;
   cout << "Pet's weight: " << petTwo.getWeight() << endl;

   return 0;
}
