#include "emailValidator.h"
#include<string>
#include<regex>
#include<iostream>

bool emailValidator(std::string email){
    
    std::regex emailRegex("^[a-zA-Z0-9]{1,20}\\.[a-zA-Z!$&]+@[a-z]{1,20}\\.[a-z]{1,3}$");
    return std::regex_match(email, emailRegex);
}

