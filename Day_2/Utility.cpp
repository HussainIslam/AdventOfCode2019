#include "Utility.h"

namespace advent{
    Utility::Utility(char delimeter) : delimeter(delimeter) {}

    string Utility::getTokens(const string text, size_t& pos) {
        string nextToken;
        if(text.size() > pos){
            nextToken = text.substr(pos, text.find(delimeter, pos) - pos);
            if(text.find(delimeter, pos) != string::npos){
                pos = text.find(delimeter, pos) + 1;
            } else {
                pos = string::npos;
            }
        } else {
            nextToken = "";
        }
        return nextToken;
    }

    char Utility::getDelimeter(){ return delimeter; }

};