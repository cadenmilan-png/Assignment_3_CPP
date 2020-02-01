#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
  Pet();
  Pet(string name, int age, string type, double weight);

  string getName();
  int getAgeYears();
  string getType();
  double getWeight();

  void setName(string name);
  void setAgeYears(int age);
  void setType(string type);
  void setWeight(double weight);

private:

  string petName;
  int petAge;
  string petType;
  double petWeight;

};
