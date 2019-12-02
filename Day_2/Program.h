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
        ostream& display(ostream& os);

        public:
        Program(string filename);
        
        ostream& operator<< (ostream& os);

    };
};

#endif