#include "Fuel.h"

namespace advent{
    int FuelRequirement::calculateFuelRequirement(){
        vector<int> temp { };
        temp.resize(mass.size());
        std::transform(mass.begin(), mass.end(), temp.begin(), [](int x){ return floor(x / 3) - 2; });
        return std::accumulate(temp.begin(), temp.end(), 0);
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