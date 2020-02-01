#include <iostream>
#include <string>
using namespace std;

#include "Pet.h"

Pet::Pet() {

  // declare variable
  petName = "";
  petAge = 0;
  petType = "";
  petWeight = 0;
}

// declare accessors
string Pet::getName(){
  return petName;
}

int Pet::getAgeYears(){
  return petAge;
}

string Pet::getType(){
  return petType;
}

double Pet::getWeight(){
  return petWeight;
}


// declare mutators
void Pet::setName(string name) {
  petName = name;
}

void Pet::setAgeYears(int age) {
   petAge = age;
}

void Pet::setType(string type) {
   petType = type;
}

void Pet::setWeight(double weight) {
   petWeight = weight;
}
