#include <iostream>

#include "Fuel.h"

using namespace std;
using namespace advent;


int main(){
    ReadInput fileInput{"mass_data.txt"};
    FuelRequirement fuel {fileInput.readFromFile()};
    int primaryRequirement = fuel.calculateFuelRequirement();
    int totalRequirement = fuel.incrementalFuelRequirement(primaryRequirement);
    cout << "Requirement without fuel: " << primaryRequirement << endl;
    cout << "Requirement with recursive Fuel: " << fuel.individualRequirement() << endl;
    return 0;
}