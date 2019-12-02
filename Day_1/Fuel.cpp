#include "Fuel.h"

namespace advent{
    int FuelRequirement::calculateFuelRequirement(){
        vector<int> temp { };
        temp.resize(mass.size());
        std::transform(mass.begin(), mass.end(), temp.begin(), [](int x){ return FuelRequirement::fuelAlgorithm(x); });
        return std::accumulate(temp.begin(), temp.end(), 0);
    }

    int FuelRequirement::individualRequirement(){
        vector<int>temp{};
        temp.resize(mass.size());
        std::transform(
            mass.begin(), 
            mass.end(), 
            temp.begin(), 
            [](int x){
                int primaryFuel = fuelAlgorithm(x);
                return FuelRequirement::incrementalFuelRequirement(primaryFuel); 
                });
        return std::accumulate(temp.begin(), temp.end(), 0);
    }

    int FuelRequirement::incrementalFuelRequirement( int requirement){
        int additionalFuel = FuelRequirement::fuelAlgorithm(requirement);
        if( additionalFuel > 0 ){
            int newIncremental = FuelRequirement::incrementalFuelRequirement( additionalFuel );
            requirement += newIncremental;
        } 
        return requirement;
    }

    int FuelRequirement::fuelAlgorithm(int base){
        return (floor( base / 3 ) - 2) > 0 ? (floor( base / 3 ) - 2) : 0;
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