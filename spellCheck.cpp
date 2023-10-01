#include "spellCheck.h"
#include<string>
#include<regex>
#include<iostream>
std::string spellCheck(std::string recLetter, std::string studentName){
   std::regex bart("([Bb]art)[a-zA-Z]+[ ]");

    return std::regex_replace(recLetter, bart, studentName + " ");
   
}

