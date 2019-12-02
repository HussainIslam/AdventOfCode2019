#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <math.h>
#include <algorithm>
#include <numeric>



using namespace std;


namespace advent{
    class FuelRequirement{
      private:
        vector<int> mass;

      public:
        FuelRequirement(): mass(){}
        FuelRequirement(vector<int> massData) : mass(massData){}
        int calculateFuelRequirement ();

    };

    class ReadInput{
      private:
        string fileName {};
      public:
        ReadInput(string filename);
        vector<int> readFromFile();
        
    };
}