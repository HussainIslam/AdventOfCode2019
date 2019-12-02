#include <iostream>


#include "Utility.h"
#include "Program.h"


using namespace std;
using namespace advent;


int main(){
    Program program("incodes.txt");
    program.display(std::cout);
    size_t pos{ 0 };
    program.updateValue(1, 12);
    program.updateValue(2, 2);
    while (pos < program.getSize()) {
        try {
            program.singleOperation(pos);
            pos += 4;
        }
        catch (const char* msg)
        {
            cout << msg << endl;
            break;
        }
    }
    program.display(std::cout);

    return 0;
}