#ifndef ADVENT_UTILITY_H
#define ADVENT_UTILITY_H



#include <iostream>
#include <string>
#include <fstream>


using namespace std;


namespace advent{
    class Utility{
        private:
        char delimeter { };

        public:
        Utility(char delimeter);
        string getTokens(const string text, size_t& pos);
        char getDelimeter();
    };
};

#endif