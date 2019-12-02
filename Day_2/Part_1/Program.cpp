#include "Program.h"

namespace advent{
    Program::Program(string filename){
        Utility utils {','};
        ifstream inputFile(filename);
        string temp;
        size_t pos{ 0 };
        getline(inputFile, temp);
        while (pos < temp.length()){
            int tocken = stoi(utils.getTokens(temp, pos));
            intCodes.push_back(tocken);
        }
    }

    ostream& Program::display(ostream& os){
        int count{ 0 };
        for (int i = 0; i < intCodes.size(); i++) {
            if (count < 3) {
                os << intCodes.at(i) << ' ';
                count++;
            }
            else {
                os << intCodes.at(i) << endl;
                count = 0;
            }
        }
        os << endl;
        return os;
    }

    void Program::singleOperation(size_t opcodePosition) {
        size_t firstPosition = opcodePosition + 1;
        size_t secondPosition = opcodePosition + 2;
        size_t thirdPosition = opcodePosition + 3;
        int valueOfFirst = intCodes.at(opcodePosition + 1);
        int valueOfSecond = intCodes.at(opcodePosition + 2);
        int valueOfThird = intCodes.at(opcodePosition + 3);
        
        /*cout << "Before operation" << endl;
        cout << "----------------" << endl;
        debugPrint(opcodePosition);*/

        if (intCodes.at(opcodePosition) == 1) {
            intCodes.at(valueOfThird) = intCodes.at(valueOfFirst) + intCodes.at(valueOfSecond);
        }
        else if (intCodes.at(opcodePosition) == 2) {
            intCodes.at(valueOfThird) = intCodes.at(valueOfFirst) * intCodes.at(valueOfSecond);
        }
        else if (intCodes.at(opcodePosition) == 99) {
            throw ("Program execution finished");
        }
        else {
            throw ("Encountered invalid opcode");
        }

        /*cout << "After operation" << endl;
        cout << "----------------" << endl;
        debugPrint(opcodePosition);*/
        
    }

    void Program::updateValue(size_t pos, int value) {
        if (pos > intCodes.size()) {
            cout << "Can't be changed" << endl;
        }
        else {
            intCodes.at(pos) = value;
        }
    }

    void Program::debugPrint(size_t opcodePosition) {
        cout << opcodePosition << ": " << intCodes.at(opcodePosition) << endl;
        cout << opcodePosition + 1 << ": " << intCodes.at(opcodePosition + 1) << endl;
        cout << opcodePosition + 2 << ": " << intCodes.at(opcodePosition + 2) << endl;
        cout << opcodePosition + 3 << ": " << intCodes.at(opcodePosition + 3) << endl;
    }



};