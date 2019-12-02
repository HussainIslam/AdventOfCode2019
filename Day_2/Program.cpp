#include "Program.h"

namespace advent{
    Program::Program(string filename){
        Utility utils {','};
        ifstream inputFile(filename);
        string temp;
        size_t pos;
        getline(inputFile, temp);
        while (!inputFile.eof())
        {
            intCodes.push_back(stoi(utils.getTokens(temp, pos)));
        }
        


    }

    ostream& Program::display(ostream& os){
        for(auto& a: intCodes){
            os << a << ' ';
        }
        os << endl;
        return os;
    }

};