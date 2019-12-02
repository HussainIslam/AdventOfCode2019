#include <iostream>

#include "Fuel.h"

using namespace std;
using namespace advent;


int main(){
    ReadInput fileInput{"mass_data.txt"};
    FuelRequirement fuel {fileInput.readFromFile()};
    cout << fuel.calculateFuelRequirement() << endl;
    return 0;
}