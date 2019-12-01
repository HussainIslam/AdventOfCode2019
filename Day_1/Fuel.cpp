#include "Fuel.h"

namespace advent{
    int FuelRequirement::calculateFuelRequirement(){
        int totalFuel { 0 };
        for(int a: mass){
            totalFuel += (floor(a / 3) - 2);
        }
        return totalFuel;
    }

    ReadInput::ReadInput(string filename){
        fileName = filename;
    }

    vector<int> ReadInput::readFromFile(){
        string line;
        vector<int> tempContainer;
        ifstream inputFile (fileName);
        if(inputFile.is_open()){
            while (!inputFile.eof()){
                getline(inputFile, line);
                tempContainer.push_back(stoi(line));
            }
        }
        return tempContainer;
    }
}