#ifndef ADVENT_PROGRAM_H
#define ADVENT_PROGRAM_H

#include <iostream>
#include <fstream>
#include <vector>


#include "Utility.h"

namespace advent{
    class Program{
        private:
        vector<int> intCodes{};
        

        public:
        Program(string filename);
        ostream& display(ostream& os);
        void singleOperation(size_t firstPosition);
        size_t getSize() { return intCodes.size(); }
        void updateValue(size_t pos, int value);

        void debugPrint(size_t opcodePosition);
    };
};

#endif