#include <iostream>


#include "Utility.h"
#include "Program.h"


using namespace std;
using namespace advent;


int main(){
    Program program("incodes.txt");

    cout << program;

    return 0;
}